#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "databasemagr.h"
#include "myapp.h"
#include "global.h"
#include "unit.h"

#include "tcpserver.h"

#include <QApplication>
#include <QMenu>
#include <QDateTime>
#include <QSystemTrayIcon>
#include <QHostAddress>
#include <QHostInfo>

#include <QMessageBox>
#include <QFileDialog>

#include <QCloseEvent>
#include <QTimerEvent>

#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitNetwork();
    ui->textBrowser_IP_info->setText(QString("本机IP：") + myHelper::GetIP());
    ui->statusbar->showMessage("登录时间："+QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss ddd"));
    ui->label_time->setText(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss ddd"));
    m_nTimerId = startTimer(1000);
    m_model = new QStandardItemModel(this);
  //  on_btnUserRefresh_clicked();
    connect(ui->button_refresh,SIGNAL(clicked()),this,SLOT(on_btnUserRefresh_clicked()));
    connect(ui->button_new,SIGNAL(clicked()),this,SLOT(on_btnUserInsert_clicked()));
    ui->tableView_user_info->setModel(m_model);
}
void MainWindow::InitNetwork()
{
    tcpMsgServer = new TcpMsgServer(this);
    bool bOk = tcpMsgServer->StartListen(60100);//监听
    ui->socket_info->setText(tr("服务器通知消息："));
    ui->socket_info->append(bOk?tr("消息服务器监听成功，端口号：60100"):tr("消息服务器监听失败"));
    tcpFileServer = new TcpFileServer(this);
    bOk = tcpFileServer->StartListen(60101);
    ui->socket_info->append(bOk ? tr("文件服务器监听成功,端口号: 60101") : tr("文件服务器监听失败"));

    connect(tcpMsgServer, SIGNAL(signalDownloadFile(QJsonValue)), tcpFileServer, SLOT(SltClientDownloadFile(QJsonValue)));
    connect(tcpMsgServer, SIGNAL(signalUserStatus(QString)), this, SLOT(ShowUserStatus(QString)));
    connect(tcpFileServer, SIGNAL(signalUserStatus(QString)), this, SLOT(ShowUserStatus(QString)));
    //    systemTrayIcon = new QSystemTrayIcon(this);
//     systemTrayIcon->setIcon(QIcon(":/res/icons/res/icons/icon_small.png"));

//     QMenu *m_trayMenu = new QMenu(this);
//     m_trayMenu->addAction("显示主面板");
//     m_trayMenu->addSeparator();
//     m_trayMenu->addAction("退出");

//     systemTrayIcon->setContextMenu(m_trayMenu);
//     systemTrayIcon->show();
//     connect(systemTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this, SLOT(SltTrayIcoClicked(QSystemTrayIcon::ActivationReason)));
//     connect(m_trayMenu, SIGNAL(triggered(QAction*)), this, SLOT(SltTrayIconMenuClicked(QAction*)));

//    connect(systemTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this, SLOT(SltTrayIcoClicked(QSystemTrayIcon::ActivationReason)));
//    connect(m_trayMenu, SIGNAL(triggered(QAction*)), this, SLOT(SltTrayIconMenuClicked(QAction*)));
}
//显示用户状态
void MainWindow::ShowUserStatus(const QString &text)
{
    ui->socket_info->append(text);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_btnUserRefresh_clicked()
{
    QJsonArray jsonArry=DataBaseMagr::Instance()->GetAllUsers();
   m_model->clear();
   m_model->setColumnCount(5);
   m_model->setRowCount(jsonArry.size());
   m_model->setHorizontalHeaderLabels(QStringList()<< "用户" << "姓名" << "密码" << "状态" << "最后登录时间");
   for (int i = 0; i < jsonArry.size(); i++) {
       QJsonObject jsonObj = jsonArry.at(i).toObject();

       m_model->setData(m_model->index(i, 0), jsonObj.value("id").toInt());
       m_model->setData(m_model->index(i, 1), jsonObj.value("name").toString());
       m_model->setData(m_model->index(i, 2), jsonObj.value("passwd").toString());
       int nStatus = jsonObj.value("status").toInt();
       m_model->setData(m_model->index(i, 3), OnLine == nStatus ? tr("在线") : tr("离线"));
       m_model->setData(m_model->index(i, 4), jsonObj.value("lasttime").toString());
   }
    ui->tableView_user_info->setColumnWidth(4, 150);
}
void MainWindow::on_btnUserInsert_clicked()
{
    QString strName = ui->line_ID->text();
    QString strPasswd = ui->line_Password->text();

    if (strName.isEmpty()) {
        ui->insert_info->setText("操作失败！用户名不能为空");
        return;
    }

    strPasswd = strPasswd.isEmpty() ? "123456" : strPasswd;

    int nId = DataBaseMagr::Instance()->RegisterUser(strName, strPasswd);

    // 判断
    if(-1 == nId)
    {
        ui->insert_info->setText("操作失败！已经存在该用户了");
    }
    else
    {
        ui->insert_info->setText("用户添加成功！");
        if(strPasswd.isEmpty())
        {
           ui->insert_info->setText("默认密码为123456");
        }
    }

 //   CMessageBox::Infomation(this, tr("提示"), -1 == nId ? tr("用户添加失败") : tr("用户添加成功！"));
    if (-1 != nId) {
        on_btnUserRefresh_clicked();
    }
}
/**
 * @brief MainWindow::closeEvent
 * 拦截关闭事件
 * @param event
 */
void MainWindow::closeEvent(QCloseEvent *event) {
#if 1
    this->hide();
    event->ignore();
#else
    QWidget::closeEvent(event);
#endif
}

/**
 * @brief MainWindow::timerEvent
 * 时间定时器
 * @param e
 */
void MainWindow::timerEvent(QTimerEvent *e)
{
    if (m_nTimerId == e->timerId()) {
        ui->label_time->setText(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss ddd"));
    }
}
