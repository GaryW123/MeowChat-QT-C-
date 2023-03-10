#include "logit.h"
#include "ui_logit.h"
#include "databasemagr.h"
#include "unit.h"
#include "myapp.h"
#include "global.h"
#include "clientmain.h"
#include <QDebug>
#include <QMessageBox>
#include <QPainter>

#include <QPropertyAnimation>
#include <QCompleter>
#include <QStringListModel>

logit::logit(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::logit)
{
    ui->setupUi(this);
    m_bConnected=false;
    InitWidget();
    //socket通信
    m_tcpSocket=new ClientSocket();
    ui->text_logitInfo->setText("尝试连接服务器···");
ui->text_logitInfo_5->setText("无登录请求...");
    m_tcpSocket->ConnectToHost(MyApp::m_strHostAddr,MyApp::m_nMsgPort);
    qDebug()<<MyApp::m_strHostAddr<<MyApp::m_nMsgPort;
    qDebug()<<"right1111111111!";
    connect(m_tcpSocket,SIGNAL(signalStatus(quint8)),this, SLOT(SltTcpStatus(quint8)));
    qDebug()<<"right22222222222222222!";

}

logit::~logit()
{
    delete ui;
}
//用户登录
void logit::on_btnlogit_clicked()
{
    qDebug()<<"ceshi-2是否进入该函数1";
    QPropertyAnimation *animation = new QPropertyAnimation(ui->labelUserHead, "pos");
    animation->setDuration(200);
    animation->setStartValue(QPoint(40, 50));
        animation->setEndValue(QPoint((this->width() - ui->labelUserHead->width()) / 2 - 20, 100));
        connect(animation, SIGNAL(finished()), this, SLOT(SltAnimationFinished()));

        animation->start();

}
 void logit::SltAnimationFinished()
 {
     if(!m_bConnected)
     {
         m_tcpSocket->ConnectToHost(MyApp::m_strHostAddr, MyApp::m_nMsgPort);
         ui->text_logitInfo_5->setText("未连接服务器，请等待！");
         qDebug()<<"ceshi-3是否进入该函数1";
         ui->labelUserHead->move(40, 115);
         return;
     }
     QJsonObject json;
     qDebug()<<"测试数据："<<ui->lineEdit_ID->text()<<ui->lineEdit_password->text();
     json.insert("name", ui->lineEdit_ID->text());
     json.insert("passwd", ui->lineEdit_password->text());
     qDebug()<<ui->lineEdit_ID->text()<<ui->lineEdit_password->text();
     m_tcpSocket->SltSendMessage(Login, json);
 }
//用户注册
void logit::on_btnregister_clicked()
{

}
//
void logit::on_connect_clicked()
{

}
//读取服务器返回的登陆信息状态

void logit::SltTcpStatus(const quint8 &state)
{
    qDebug()<<"right3333333333333333333333333333333!";
    switch(state)
    {
    case DisConnectedHost:
    {
        m_bConnected=false;
        ui->text_logitInfo->setText("服务器已断开");
    }
        break;
    case ConnectedHost:
    {
        m_bConnected=true;
        ui->text_logitInfo->setText("已连接服务器");
    }
break;
        //登录验证成功
    case LoginSuccess:
    {
        ui->text_logitInfo_5->setText("登录成功!");
        disconnect(m_tcpSocket, SIGNAL(signalStatus(quint8)), this, SLOT(SltTcpStatus(quint8)));
    MyApp::m_strUserName=ui->lineEdit_ID->text();
    MyApp::m_strPassword=ui->lineEdit_password->text();
    MyApp::SaveConfig();
    //显示主界面
    clientmain *mainWindow=new clientmain();
    if(!QFile::exists(MyApp::m_strHeadFile))
    {
        myHelper::Sleep(100);
        QJsonObject jsonObj;
        jsonObj.insert("from",MyApp::m_nId);
        jsonObj.insert("id",-2);
        jsonObj.insert("msg", myHelper::GetFileNameWithExtension(MyApp::m_strHeadFile));//头像
        // socket消息发送封装
        m_tcpSocket->SltSendMessage(GetFile,jsonObj);
        myHelper::Sleep(100);
    }
    //居中显示
    myHelper::FormInCenter(mainWindow);
    mainWindow->SetSocket(m_tcpSocket, MyApp::m_strUserName);
    mainWindow->show();
    this->close();
  //  mainWindow
    }
            break;
    case LoginPasswdError:
    {
        ui->text_logitInfo_5->setText("登录失败，请检查用户名和密码！");
    }
        break;
    case RegisterOk://待添加
    {
        ui->text_logitInfo->setText("该账号注册成功！请点击登录！");
    }
        break;
    case RegisterFailed:
    {
        CMessageBox::Infomation(this, "该账号已经注册！请点击登录！");
    }
        break;
    default:
        break;
    }
}

//IP地址检查，连接服务器
void logit::on_btnSaveCfg_clicked()
{
    QString strHost=ui->lineEdit_IP->text();
    qDebug()<<"ceshi"<<strHost;
    if (!myHelper::IsIP(strHost))
    {
        ui->text_logitInfo->setText("IP地址设置有误!");
        return;
    }
    int nMsgPort=ui->lineEdit_info->text().toInt();
    if (nMsgPort > 65535 || nMsgPort < 100) {
        ui->text_logitInfo->setText("端口设置有误!");
        return;
    }
    int nFilePort=ui->lineEdit_file->text().toInt();
    if (nMsgPort > 65535 || nMsgPort < 100) {
        ui->text_logitInfo->setText("端口设置有误!");
        return;
    }
    if (nMsgPort == nFilePort) {
        ui->text_logitInfo->setText("2个端口不能设置一样!");
        return;
    }
    MyApp::m_strHostAddr = strHost;
    MyApp::m_nMsgPort    = nMsgPort;
    MyApp::m_nFilePort   = nFilePort;
    //保存配置
    MyApp::SaveConfig();
    //如果没有连接服务器，那么尝试新的配置连接
    if (!m_bConnected) {
        m_tcpSocket->ConnectToHost(MyApp::m_strHostAddr, MyApp::m_nMsgPort);
    }

}

//初始化界面
void logit::InitWidget()
{
    ui->lineEdit_IP->setText(MyApp::m_strHostAddr);
    ui->lineEdit_info->setText(QString::number(MyApp::m_nMsgPort));
    ui->lineEdit_file->setText(QString::number(MyApp::m_nFilePort));

    QStringList valueList;
    valueList << "xiaoni" << "zhangsan" << "dengmc" << "wangwu";
    QCompleter *completer = new QCompleter(valueList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_ID->setCompleter(completer);
    connect(ui->Button_logit,SIGNAL(clicked()),SLOT(on_btnlogit_clicked()));
    qDebug()<<"测试-点击登陆";
    connect(ui->Button_register,SIGNAL(clicked()),SLOT(on_btnregister_clicked()));
    connect(ui->Button_connect,SIGNAL(clicked()),SLOT(on_btnSaveCfg_clicked()));
ui->stackedWidget->setCurrentIndex(1);
}



void logit::on_Button_register_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void logit::on_Button_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void logit::on_pushButton_register2_clicked()
{
        // 如果没有链接上服务器，此时进行一次链接
        if (!m_bConnected) {
            m_tcpSocket->ConnectToHost(MyApp::m_strHostAddr, MyApp::m_nMsgPort);
            CMessageBox::Infomation(this, "未连接服务器，请等待！");
            return;
        }

    QString strName = ui->lineEdit_ID2->text();
    QString strPasswd = ui->lineEdit_password2->text();
    qDebug()<<strPasswd;

    if (strName.isEmpty()||strPasswd.isEmpty()) {
        ui->textBrowser->setText("操作失败！用户名不能为空");
        return;
    }

    strPasswd = strPasswd.isEmpty() ? "123456" : strPasswd;
    QJsonObject json;
    json.insert("name",strName);
    json.insert("passwd",strPasswd);
    m_tcpSocket->SltSendMessage(Register,json);//addfriend
}


/*
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
*/
