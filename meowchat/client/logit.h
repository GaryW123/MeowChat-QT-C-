#ifndef LOGIT_H
#define LOGIT_H

#include <QMainWindow>
#include "clientsocket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class logit; }
QT_END_NAMESPACE

class logit : public QMainWindow
{
    Q_OBJECT

public:
    logit(QWidget *parent = nullptr);
    ~logit();
private slots:
    //登陆用户
    void on_btnlogit_clicked();
    //注册用户
    void on_btnregister_clicked();
    //tcp服务器信息返回处理
    void SltTcpStatus(const quint8 &state);
    //尝试连接服务器
    void on_connect_clicked();
    //检查是否是ip地址
    void on_btnSaveCfg_clicked();
    //结束标志
    void SltAnimationFinished();

    void on_Button_register_clicked();

    void on_Button_back_clicked();

    void on_pushButton_register2_clicked();

private:
    Ui::logit *ui;
    bool m_bConnected;
    //socket通信
    ClientSocket *m_tcpSocket;
    void InitWidget();
};
#endif // LOGIT_H
