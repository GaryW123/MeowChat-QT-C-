#include "clientmain.h"
#include "ui_clientmain.h"

#include "unit.h"
#include "qqcell.h"
#include "qqlistviewgroup.h"
#include "global.h"

#include "chatroom.h"
#include "databasemagr.h"
#include <QTimer>
#include <QMenu>
#include <QInputDialog>
#include <QDebug>

#include <QJsonArray>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonDocument>

#include <QCloseEvent>
clientmain::clientmain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientmain)
{
    ui->setupUi(this);
 //   this->setWindowFlags(Qt::FramelessWindowHint);
//实例化按钮组
    void InitSysMenu();
    InitQQListMenu();
    ui->stackedWidget->setCurrentIndex(0);
}
void clientmain::SetSocket(ClientSocket *tcpSocket, const QString &name)
{
    if (NULL != tcpSocket) {
        m_tcpSocket = tcpSocket;

        connect(m_tcpSocket, SIGNAL(signalMessage(quint8,QJsonValue)), this, SLOT(SltTcpReply(quint8,QJsonValue)));
        connect(m_tcpSocket, SIGNAL(signalStatus(quint8)), this, SLOT(SltTcpStatus(quint8)));

        // 加载头像
        // 上线的时候获取当前好友的状态
        QJsonArray friendArr = DataBaseMagr::Instance()->GetMyFriend(MyApp::m_nId);

        // 组织Jsonarror
        m_tcpSocket->SltSendMessage(GetMyFriends, friendArr);

        // 添加我的群组
  //      AddMyGroups(DataBaseMagr::Instance()->GetMyGroup(MyApp::m_nId));
    }
    if (name.isEmpty()) return;
    ui->label_selfIcon->setText(name);
}

void clientmain::InitQQListMenu()
{
    QWidget *frinds_classmates=new QWidget();
    ui->tabWidgetFriends->addTab(frinds_classmates,"亲人");
    QMenu *addFriend = new QMenu(this);
    addFriend->addAction(tr("添加好友"));
    addFriend->addAction(tr("刷新"));
    addFriend->addSeparator();
    addFriend->addAction(tr("删除该组"));
    connect(addFriend, SIGNAL(triggered(QAction*)), this, SLOT(onAddFriendMenuDidSelected(QAction*)));
    ui->friendListWidget->setGroupPopMenu(addFriend);
    QMenu *childMenu = new QMenu(this);
    childMenu->addAction(tr("发送即时消息"));
    childMenu->addSeparator();
    childMenu->addAction("移动至黑名单");
    childMenu->addAction("删除联系人");

    QMenu *groupListMenu = new QMenu(tr("移动联系人至"));
    childMenu->addMenu(groupListMenu);

    // childMenu->addAction(tr("创建讨论组"));
    connect(childMenu, SIGNAL(triggered(QAction*)), this, SLOT(onChildPopMenuDidSelected(QAction*)));
    ui->friendListWidget->setChildPopMenu(childMenu);

    QQCell *myFriend = new QQCell;
    myFriend->groupName = QString(tr("我的好友"));
    myFriend->isOpen = false;
    myFriend->type = QQCellType_Group;
    myFriend->name = QString(tr("我的好友"));
    myFriend->subTitle = QString("(0/0)");
    ui->friendListWidget->insertQQCell(myFriend);

    QQCell *blacklist = new QQCell;
    blacklist->groupName = QString(tr("黑名单"));
    blacklist->isOpen = false;
    blacklist->type = QQCellType_Group;
    blacklist->name = QString(tr("黑名单"));
    blacklist->subTitle = QString("(0/0)");
    ui->friendListWidget->insertQQCell(blacklist);

    connect(ui->friendListWidget, SIGNAL(onChildDidDoubleClicked(QQCell*)), this, SLOT(SltFriendsClicked(QQCell*)));
    QMenu *myGroupMenu = new QMenu(this);
    myGroupMenu->addAction(tr("创建讨论组"));
    myGroupMenu->addAction(tr("加入讨论组"));
    myGroupMenu->addAction(tr("删除该组"));
    myGroupMenu->addSeparator();
    connect(myGroupMenu, SIGNAL(triggered(QAction*)), this, SLOT(onGroupPopMenuDidSelected(QAction*)));
    ui->groupListWidget->setGroupPopMenu(myGroupMenu);
    //添加默认项
    QQCell *groupCell = new QQCell;
    groupCell->groupName = QString(tr("我的群组"));
    groupCell->isOpen = false;
    groupCell->type = QQCellType_GroupEx;
    groupCell->name = QString(tr("讨论组"));
    groupCell->subTitle = QString("(0/0)");
    ui->groupListWidget->insertQQCell(groupCell);
    /*待添加功能*/

}

void clientmain::onChildPopMenuDidSelected(QAction *action)
{
    QQCell *cell = ui->friendListWidget->GetRightClickedCell();
    if (NULL == cell) return;

    if (!action->text().compare(tr("发送即时消息")))
    {
        qDebug() << "send message" << cell->name;
        // 打开对话框
        SltFriendsClicked(cell);
    }
    else if (!action->text().compare(tr("移动至黑名单")))
    {
        qDebug() << "balck friend list" << cell->name;
    }
    else if (!action->text().compare(tr("删除联系人")))
    {
        qDebug() << "delete my friend" << cell->name;
        ui->friendListWidget->removeQQCell(cell);
        // 更新数据库
        bool bOk = DataBaseMagr::Instance()->DeleteMyFriend(cell->id, MyApp::m_nId);
        qDebug()<<"删除结果分析中....";
        CMessageBox::Infomation(this, bOk ? tr("用户删除成功！") : tr("用户删除失败！"));
    }
}
//自定义槽函数，接收socket的返回信息
void clientmain::analysisTcpSocket(const quint8 &type, const QJsonValue &jsonval)
{
    qDebug()<<ui->lineEdit_addID->text()<<"ceshi3";//
    switch(type)
    {
    case UserOnLine://有朋友上线
        qDebug()<<"朋友上线";
        break;
    case UserOffLine://朋友下线
        qDebug()<<"朋友下线";
        break;
    case AddFriend://添加好友
        analy_addFriend(jsonval);
        break;
    case GetMyFriends://获取好友信息
        ParseGetFriendsReply(jsonval);
        qDebug()<<"获取好友信息";
        break;
    case RefreshFriends://刷新好友列表
        refreshFriendList(jsonval);
        qDebug()<<"刷新好友列表";
        break;
    default:
        qDebug()<<"default";
        break;
    }
}
void clientmain::analy_addFriend(const QJsonValue &jsonval)
{
    if(jsonval.isObject())
    {
        QJsonObject dataObj = jsonval.toObject();

        int nStatus = dataObj.value("status").toInt();

        int nId = dataObj.value("id").toInt();
        if (-1 == nId) {
            CMessageBox::Infomation(this, "未找到该用户!");
            return;
        }
        QString strHead = dataObj.value("head").toString();
        // 头像判断，如果不在就申请
        if (!QFile::exists(MyApp::m_strHeadPath + strHead))
        {
            QJsonObject jsonObj;
            jsonObj.insert("from", MyApp::m_nId);
            jsonObj.insert("id",  -2);
            jsonObj.insert("msg", strHead);
            m_tcpSocket->SltSendMessage(GetFile, jsonObj);

            myHelper::Sleep(100);
        }
        QQCell *cell = new QQCell;
        cell->groupName = QString(tr("我的好友"));
        cell->iconPath  = GetHeadPixmap(strHead);
        cell->type      = QQCellType_Child;
        cell->name      = dataObj.value("name").toString();
        cell->subTitle  = QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线"));
        cell->id        = nId;
        cell->status    = nStatus;
        ui->textBrowser_addFri->setText("添加好友成功！");
        ui->friendListWidget->insertQQCell(cell);
        DataBaseMagr::Instance()->AddFriend(cell->id, MyApp::m_nId, cell->name);
    }

}
QString clientmain::GetHeadPixmap(const QString &name) const
{
    if (QFile::exists(MyApp::m_strHeadPath + name)) {
        return MyApp::m_strHeadPath + name;
    }

    return ":/reses/res/icons/icon_cat7.jpg";
}







clientmain::~clientmain()
{
    delete ui;
    foreach (ChatWindow *window, m_chatFriendWindows) {
        window->close();
    }

    foreach (ChatWindow *window, m_chatGroupWindows) {
        window->close();
    }
}

void clientmain::on_btnFriend_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void clientmain::on_btnGroup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void clientmain::on_toolButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void clientmain::on_toolButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void clientmain::on_btn_addFriend_clicked()
{
    QString addID=ui->lineEdit_addID->text();
    qDebug()<<addID<<"ceshi";
    qDebug()<<ui->lineEdit_addID->text();///////////////////////////////////////debug
    if(!addID.isEmpty())
    {
        //判断是否为自己的好友
        if(DataBaseMagr::Instance()->isMyFriend(MyApp::m_nId,addID))
        {
            qDebug()<<ui->lineEdit_addID->text()<<"ceshi2";///////////////////////////////////////debug
            ui->textBrowser_addFri->setText("你已有此好友，不能重复添加!");
            return;
        }
        //发送添加好友信息
        QJsonObject json;
        json.insert("id",m_tcpSocket->GetUserId());
        json.insert("name",addID);
        m_tcpSocket->SltSendMessage(AddFriend,json);//addfriend

    }
    return;
}

void clientmain::on_btnRefresh_clicked()
{
    // 获取当前好友的状态
    QJsonArray friendArr = DataBaseMagr::Instance()->GetMyFriend(MyApp::m_nId);

    // 组织Jsonarror
    m_tcpSocket->SltSendMessage(RefreshFriends, friendArr);

}
//刷新好友
void clientmain::refreshFriendList(const QJsonValue &jsonval)
{
    if(jsonval.isArray())
    {
        QJsonArray array=jsonval.toArray();
        int size=array.size();
        for(int i=0;i<size;++i)
        {
            QJsonObject obj=array.at(i).toObject();
            int nId = obj.value("id").toInt();
            int nStatus = obj.value("status").toInt();
            QString strHead = obj.value("head").toString();
            QList<QQCell *> friends =  ui->friendListWidget->getCells();
            foreach (QQCell *cell, friends.at(0)->childs) {
                if (cell->id == nId) {
                    cell->SetSubtitle(strHead);
                    cell->SetSubtitle(QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线")));
                    qDebug()<<"debug:"<<nId<<nStatus;
                }
            }
                ui->friendListWidget->upload();

        }
    }
}

void clientmain::SltFriendsClicked(QQCell *cell)
{

    // 判断与该用户是否有聊天窗口，如果有弹出窗口
    foreach (ChatWindow *window, m_chatFriendWindows) {
        if (window->GetUserId() == cell->id) {
            window->show();
            return;
        }
  }
    // 没有检索到聊天窗口，直接弹出新窗口
    ChatWindow *chatWindow = new ChatWindow();
    connect(chatWindow, SIGNAL(signalSendMessage(quint8,QJsonValue)), m_tcpSocket, SLOT(SltSendMessage(quint8,QJsonValue)));
    connect(chatWindow, SIGNAL(signalClose()), this, SLOT(SltFriendChatWindowClose()));
    // 设置窗口属性
    chatWindow->SetCell(cell);
    chatWindow->show();

    // 添加到当前聊天框
    m_chatFriendWindows.append(chatWindow);
}


void clientmain::ParseGetFriendsReply(const QJsonValue &jsonval)
{
    if (jsonval.isArray()) {
        QJsonArray array = jsonval.toArray();
        int nSize = array.size();
        for (int i = 0; i < nSize; ++i) {
            QJsonObject jsonObj = array.at(i).toObject();
            int nStatus = jsonObj.value("status").toInt();

            QString strHead = jsonObj.value("head").toString();

            // 头像判断，如果不在就申请
            if (!QFile::exists(MyApp::m_strHeadPath + strHead))
            {
                QJsonObject jsonObj;
                jsonObj.insert("from", MyApp::m_nId);
                jsonObj.insert("id",  -2);
                jsonObj.insert("msg", strHead);
                m_tcpSocket->SltSendMessage(GetFile, jsonObj);

                myHelper::Sleep(100);
            }

            QQCell *cell = new QQCell;
            cell->groupName = QString(tr("我的好友"));
            cell->iconPath  = MyApp::m_strHeadPath + jsonObj.value("head").toString();
            cell->type      = QQCellType_Child;
            cell->name      = jsonObj.value("name").toString();
            cell->subTitle  = QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线"));
            cell->id        = jsonObj.value("id").toInt();
            cell->status    = nStatus;

            ui->friendListWidget->insertQQCell(cell);
        }
    }

    // 上报我的上线消息
    m_tcpSocket->SltSendOnline();
}

void clientmain::on_on_pushButton_2_clicked()
{
    int id=ui->lineEdit_delete->text().toInt();
    qDebug()<<"删除"<<id<<"中...";
    qDebug()<<"删除"<<MyApp::m_nId<<"中...";

    bool bOk = DataBaseMagr::Instance()->DeleteMyFriend(id, MyApp::m_nId);
    if(bOk)
    {
        ui->textBrowser_delete->setText("删除成功！");
    }
    else
    {
         ui->textBrowser_delete->setText("删除失败！");
    }
 //   CMessageBox::Infomation(this, bOk ? tr("用户删除成功！") : tr("用户删除失败！"));

}
void clientmain::onGroupPopMenuDidSelected(QAction *action)
{
    if (!action->text().compare(tr("创建讨论组")))
    {
        QString text = CInputDialog::GetInputText(this, "我的朋友们");
        if (!text.isEmpty()) {

            // 构建 Json 对象
            QJsonObject json;
            json.insert("id", m_tcpSocket->GetUserId());
            json.insert("name", text);

            m_tcpSocket->SltSendMessage(CreateGroup, json);
        }
    }
    else if (!action->text().compare(tr("加入讨论组")))
    {
        QString text = CInputDialog::GetInputText(this, "我的朋友们");
        if (!text.isEmpty()) {
            // 首先判断是否已经添加该群组了
            if (DataBaseMagr::Instance()->isInGroup(text)) {
                CMessageBox::Infomation(this, "你已经添加该群组了！");
                return;
            }

            // 构建 Json 对象
            QJsonObject json;
            json.insert("id", MyApp::m_nId);
            json.insert("name", text);

            m_tcpSocket->SltSendMessage(AddGroup, json);
        }
    }
    else if (!action->text().compare(tr("删除该组")))
    {
        qDebug() << "delete group";
    }
}
void clientmain::onAddFriendMenuDidSelected(QAction *action)
{
    if (!action->text().compare(tr("添加好友")))
    {
        QString text = CInputDialog::GetInputText(this, "zhangsan");

        if (!text.isEmpty()) {
            // 首先判断该用户是否已经是我的好友了
            if (DataBaseMagr::Instance()->isMyFriend(MyApp::m_nId, text)) {
                CMessageBox::Infomation(this, "该用户已经是你的好友了！");
                return;
            }

            // 构建 Json 对象
            QJsonObject json;
            json.insert("id", m_tcpSocket->GetUserId());
            json.insert("name", text);

            m_tcpSocket->SltSendMessage(AddFriend, json);
        }
    }
    else if (!action->text().compare(tr("刷新")))
    {
        // 上线的时候获取当前好友的状态
        QJsonArray friendArr = DataBaseMagr::Instance()->GetMyFriend(MyApp::m_nId);

        // 组织Jsonarror
        m_tcpSocket->SltSendMessage(RefreshFriends, friendArr);
    }
    else if (!action->text().compare(tr("删除该组")))
    {
        qDebug() << "delete group";
    }
}
void clientmain::SltGroupsClicked(QQCell *cell)
{
    // 构建 Json 对象
    QJsonObject json;
    json.insert("id", cell->id);
    json.insert("name", cell->name);

    m_tcpSocket->SltSendMessage(GetMyGroups, json);

    // 判断与该用户是否有聊天窗口，如果有弹出窗口
    foreach (ChatWindow *window, m_chatGroupWindows) {
        if (window->GetUserId() == cell->id) {
            window->show();
            return;
        }
    }

    // 没有检索到聊天窗口，直接弹出新窗口
    ChatWindow *chatWindow = new ChatWindow();
    connect(chatWindow, SIGNAL(signalSendMessage(quint8,QJsonValue)), m_tcpSocket, SLOT(SltSendMessage(quint8,QJsonValue)));
    connect(chatWindow, SIGNAL(signalClose()), this, SLOT(SltGroupChatWindowClose()));

    chatWindow->SetCell(cell, 1);
    chatWindow->show();

    // 添加到当前聊天框
    m_chatGroupWindows.append(chatWindow);
}
void clientmain::ParseFriendMessageReply(const QJsonValue &dataVal)
{
    qDebug()<<"所受到信息。。。";
    if (dataVal.isObject()) {
        QJsonObject dataObj = dataVal.toObject();
        int nId = dataObj.value("id").toInt();
        // 播放系统提示音
      //  TestMedia::Instance()->playWav(MyApp::m_strSoundPath + "msg.wav");

        SltReadMessages(dataVal, nId);
    }
}
void clientmain::SltReadMessages(const QJsonValue &json, const int &id)
{
    qDebug()<<"读取信息。。。";
    // 如果收到消息时有聊天窗口存在，直接添加到聊天记录，并弹出窗口
    foreach (ChatWindow *window, m_chatFriendWindows) {
        if (window->GetUserId() == id) {
            window->AddMessage(json);
            window->show();
            return;
        }
    }

    // 没有检索到聊天窗口，直接弹出新窗口
    QList<QQCell *> groups = ui->friendListWidget->getCells();
    foreach (QQCell *cell, groups.at(0)->childs) {
        if (cell->id == id) {
            ChatWindow *chatWindow = new ChatWindow();
            connect(chatWindow, SIGNAL(signalSendMessage(quint8,QJsonValue)), m_tcpSocket, SLOT(SltSendMessage(quint8,QJsonValue)));
            connect(chatWindow, SIGNAL(signalClose()), this, SLOT(SltFriendChatWindowClose()));
 qDebug()<<"读取信息。。。";
            chatWindow->SetCell(cell);
            chatWindow->AddMessage(json);
            chatWindow->show();
            // 添加到当前聊天框
            m_chatFriendWindows.append(chatWindow);
            return;
        }
    }
}
void clientmain::SltTcpReply(const quint8 &type, const QJsonValue &dataVal)
{
    switch (type) {
    case UserOnLine:
    {
        UpdateFriendStatus(OnLine, dataVal);
    }
        break;
    case UserOffLine:
    {
        UpdateFriendStatus(OffLine, dataVal);
    }
        break;
    case UpdateHeadPic:
    {
        // 你的好友更新了头像
 //       ParseUpFriendHead(dataVal);
    }
        break;
    case AddFriend:
    {
 //       ParseAddFriendReply(dataVal);
    }
        break;
    case AddGroup:
    {
 //       ParseAddGroupReply(dataVal);
    }
        break;

    case AddFriendRequist:
    {
        ParseAddFriendRequest(dataVal);
    }
        break;
    case AddGroupRequist:
    {
//        ParseAddGroupRequest(dataVal);
    }
        break;

    case CreateGroup:
    {
//        ParseCreateGroupReply(dataVal);
    }
        break;
    case GetMyFriends:
    {
        ParseGetFriendsReply(dataVal);
    }
        break;
    case GetMyGroups:
    {
 //       ParseGetGroupFriendsReply(dataVal);
    }
        break;
    case RefreshFriends:
    {
        ParseRefreshFriendsReply(dataVal);
    }
        break;
    case RefreshGroups:
    {
        ParseRefreshGroupFriendsReply(dataVal);
    }
        break;
    case SendMsg:
    {
        qDebug()<<"解析消息成功，将要在聊天框中出现。。。";
        ParseFriendMessageReply(dataVal);
    }
        break;
    case SendGroupMsg:
    {
 //       ParseGroupMessageReply(dataVal);
    }
        break;
    case SendFile:
    {
        ParseFriendMessageReply(dataVal);
    }
        break;
    case SendPicture:
    {
        ParseFriendMessageReply(dataVal);
    }
        break;
    default:
        break;
    }
}
void clientmain::ParseRefreshFriendsReply(const QJsonValue &dataVal)
{
    // data 的 value 是数组
    if (dataVal.isArray()) {
        QJsonArray array = dataVal.toArray();
        int nSize = array.size();
        for (int i = 0; i < nSize; ++i) {
            QJsonObject jsonObj = array.at(i).toObject();
            int nId = jsonObj.value("id").toInt();
            int nStatus = jsonObj.value("status").toInt();
            QString strHead = jsonObj.value("head").toString();

            QList<QQCell *> friends = ui->friendListWidget->getCells();
            foreach (QQCell *cell, friends.at(0)->childs) {
                if (cell->id == nId) {
                    cell->SetSubtitle(strHead);
                    cell->SetSubtitle(QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线")));
                }
            }

            ui->friendListWidget->upload();
        }
    }
}

/**
 * @brief MainWindow::ParseRefreshGroupFriendsReply
 * 刷新组
 * @param dataVal
 */
void clientmain::ParseRefreshGroupFriendsReply(const QJsonValue &dataVal)
{
    // data 的 value 是数组
    if (dataVal.isArray()) {
        QJsonArray array = dataVal.toArray();
        int nSize = array.size();
        for (int i = 0; i < nSize; ++i) {
            //            QJsonObject jsonObj = array.at(i).toObject();
            //            int nId = jsonObj.value("id").toInt();
            //            int nStatus = jsonObj.value("status").toInt();

            //            QList<QQCell *> friends = ui->groupListWidget->getCells();
            //            foreach (QQCell *cell, friends.at(0)->childs) {
            //                if (cell->id == nId) {
            //                    cell->SetSubtitle(QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线")));
            //                }
            //            }

            //            ui->groupListWidget->upload();
        }
    }
}
void clientmain::UpdateFriendStatus(const quint8 &nStatus, const QJsonValue &dataVal)
{
    if (!dataVal.isObject()) return;
    QJsonObject jsonObj = dataVal.toObject();
    int nId = jsonObj.value("id").toInt();

    QList<QQCell *> groups = ui->friendListWidget->getCells();
    foreach (QQCell *cell, groups.at(0)->childs) {
        if (cell->id == nId) {
            cell->SetStatus(nStatus);
            cell->SetSubtitle(QString("当前用户状态：%1 ").arg(OnLine == nStatus ? tr("在线") : tr("离线")));
        }
    }

    // 更新显示
    ui->friendListWidget->upload();
 //   TestMedia::Instance()->playWav(MyApp::m_strSoundPath + "userlogon.wav");
}
void clientmain::SltFriendChatWindowClose()
{
    ChatWindow *chatWindow = (ChatWindow*)sender();
    disconnect(chatWindow, SIGNAL(signalSendMessage(quint8,QJsonValue)), m_tcpSocket, SLOT(SltSendMessage(quint8,QJsonValue)));
    disconnect(chatWindow, SIGNAL(signalClose()), this, SLOT(SltFriendChatWindowClose()));

    if (!this->isVisible() && m_chatFriendWindows.size() == 1)
    {
        this->show();
    }

    // 删除聊天窗口
    m_chatFriendWindows.removeOne(chatWindow);
}
void clientmain::ParseAddFriendRequest(const QJsonValue &dataVal)
{
    //
    if(dataVal.isObject()) {
        QJsonObject jsonObj = dataVal.toObject();
        int nId = jsonObj.value("id").toInt();
        QString name = jsonObj.value("name").toString();
        QString strMsg = jsonObj.value("msg").toString();

        // 判断我是否已经添加该好友
        if (!DataBaseMagr::Instance()->isMyFriend(MyApp::m_nId, name)) {
            QQCell *cell = new QQCell;
            cell->groupName = QString(tr("我的好友"));
            cell->iconPath  = MyApp::m_strHeadPath + jsonObj.value("head").toString();
            cell->type      = QQCellType_Child;
            cell->name     = name;
            cell->subTitle  = QString("当前用户状态：在线 ");
            cell->id        = nId;
            cell->status    = OnLine;

            ui->friendListWidget->insertQQCell(cell);

            // 更新至数据库
            DataBaseMagr::Instance()->AddFriend(cell->id, MyApp::m_nId, cell->name);
        }

        // 播放系统提示音
        myHelper::PlaySound("system");
        // 询问
        CMessageBox::Question(this, tr("[%1] 请求加你为好友，是否接受？\n %2").arg(name).arg(strMsg));
    }
}
