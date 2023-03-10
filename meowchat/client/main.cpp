#include "logit.h"
#include "myapp.h"
#include "global.h"
#include "clientmain.h"
#include "databasemagr.h"
#include <QApplication>

#include <QApplication>
#include <QHostInfo>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));

    MyApp::InitApp(a.applicationDirPath());
    myHelper::setStyle("default");
    // 加载数据库
    DataBaseMagr::Instance()->OpenUserDb(MyApp::m_strDatabasePath + "user.db");
    DataBaseMagr::Instance()->OpenMessageDb(MyApp::m_strDatabasePath + "msg.db");
//ChatWindow c;
//c.show();
    logit w;
    w.show();
    return a.exec();
}
