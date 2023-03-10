#include "mainwindow.h"
#include "myapp.h"
#include "databasemagr.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 加载数据库
    DataBaseMagr::Instance()->OpenDb(MyApp::m_strDatabasePath + "info.db");
    MainWindow w;
    w.show();
    return a.exec();
}
