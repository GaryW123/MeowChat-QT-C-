#ifndef CLIENTMAIN_H
#define CLIENTMAIN_H
#include "customwidget.h"
#include <QWidget>
#include "chatroom.h"
#include "clientsocket.h"
#include <QButtonGroup>
namespace Ui {
class clientmain;
}

class clientmain : public QWidget
{
    Q_OBJECT

public:
    explicit clientmain(QWidget *parent = nullptr);
    ~clientmain();
    void SetSocket(ClientSocket *tcpSocket, const QString &name);
private slots:
    void SltReadMessages(const QJsonValue &json, const int &id);
  void SltTcpReply(const quint8 &type, const QJsonValue &dataVal);
    // 好友列表点击
    void SltFriendsClicked(QQCell *cell);
    // 群组列表点击
    void SltGroupsClicked(QQCell *cell);
    void on_btnFriend_clicked();

    void on_btnGroup_clicked();

    void on_toolButton_3_clicked();

    void on_toolButton_4_clicked();

    void on_btn_addFriend_clicked();

    void on_btnRefresh_clicked();
    void analysisTcpSocket(const quint8 &type, const QJsonValue &dataVal);

    void on_on_pushButton_2_clicked();

    void onChildPopMenuDidSelected(QAction *action);
    void onAddFriendMenuDidSelected(QAction *action);
    void onGroupPopMenuDidSelected(QAction *action);
    void SltFriendChatWindowClose();
private:
    Ui::clientmain *ui;

    //添加群
    // 聊天窗管理
    QList<ChatWindow *> m_chatFriendWindows;
    QList<ChatWindow *> m_chatGroupWindows;

    // socket通信类
    ClientSocket    *m_tcpSocket;


private:
    void InitSysMenu();//
    void InitQQListMenu();
    void analy_addFriend(const QJsonValue &jsonval);
    QString GetHeadPixmap(const QString &name) const;
    void refreshFriendList(const QJsonValue &jsonval);
    void ParseGetFriendsReply(const QJsonValue &jsonval);
    void ParseFriendMessageReply(const QJsonValue &dataVal);
    void UpdateFriendStatus(const quint8 &nStatus, const QJsonValue &dataVal);
    void ParseRefreshFriendsReply(const QJsonValue &dataVal);
    void ParseRefreshGroupFriendsReply(const QJsonValue &dataVal);
    void ParseAddFriendRequest(const QJsonValue &dataVal);


};

#endif // CLIENTMAIN_H
