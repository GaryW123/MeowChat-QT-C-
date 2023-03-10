#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class TcpMsgServer;//如果实例化必须要包含文件
class TcpFileServer;
#include <QButtonGroup>
#include <QSystemTrayIcon>
#include <QStandardItemModel>
namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;

    QButtonGroup *m_buttonGroup;
    QStandardItemModel *m_model;

    // 服务配置
    TcpMsgServer *tcpMsgServer;
    TcpFileServer *tcpFileServer;

    // 系统菜单
    QSystemTrayIcon *systemTrayIcon;

private:
    void InitNetwork();
    void SetUserIdentity(const int &identity);
private slots:

    // 系统菜单
    void ShowUserStatus(const QString &text);//显示用户状态
    void on_btnUserRefresh_clicked();//刷新用户信息
    void on_btnUserInsert_clicked();
protected:
    int m_nTimerId;
    void closeEvent(QCloseEvent *e);
    void timerEvent(QTimerEvent *e);

};
#endif // MAINWINDOW_H
