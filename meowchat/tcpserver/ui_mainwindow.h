/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QTextBrowser *socket_info;
    QLabel *label_2;
    QTableView *tableView_user_info;
    QPushButton *button_refresh;
    QTextBrowser *textBrowser_IP_info;
    QLabel *label_3;
    QLabel *label_time;
    QWidget *widget_2;
    QLabel *label_4;
    QLineEdit *line_ID;
    QLabel *label_5;
    QLineEdit *line_Password;
    QPushButton *button_new;
    QTextBrowser *insert_info;
    QLabel *label_7;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(999, 698);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 10, 451, 571));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 231, 121));
        socket_info = new QTextBrowser(widget);
        socket_info->setObjectName(QString::fromUtf8("socket_info"));
        socket_info->setGeometry(QRect(30, 80, 271, 91));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 0, 81, 31));
        tableView_user_info = new QTableView(widget);
        tableView_user_info->setObjectName(QString::fromUtf8("tableView_user_info"));
        tableView_user_info->setGeometry(QRect(20, 180, 431, 351));
        button_refresh = new QPushButton(widget);
        button_refresh->setObjectName(QString::fromUtf8("button_refresh"));
        button_refresh->setGeometry(QRect(50, 540, 93, 28));
        textBrowser_IP_info = new QTextBrowser(centralwidget);
        textBrowser_IP_info->setObjectName(QString::fromUtf8("textBrowser_IP_info"));
        textBrowser_IP_info->setGeometry(QRect(450, 30, 271, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(711, 544, 81, 31));
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(540, 520, 251, 21));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(480, 150, 471, 211));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 10, 71, 31));
        line_ID = new QLineEdit(widget_2);
        line_ID->setObjectName(QString::fromUtf8("line_ID"));
        line_ID->setGeometry(QRect(80, 10, 131, 31));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 50, 71, 31));
        line_Password = new QLineEdit(widget_2);
        line_Password->setObjectName(QString::fromUtf8("line_Password"));
        line_Password->setGeometry(QRect(80, 50, 131, 31));
        line_Password->setEchoMode(QLineEdit::Password);
        button_new = new QPushButton(widget_2);
        button_new->setObjectName(QString::fromUtf8("button_new"));
        button_new->setGeometry(QRect(70, 140, 121, 51));
        insert_info = new QTextBrowser(widget_2);
        insert_info->setObjectName(QString::fromUtf8("insert_info"));
        insert_info->setGeometry(QRect(250, 30, 211, 141));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 5, 171, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, -130, 1001, 791));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/res/background/cat_2.jpg")));
        label_6->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_6->raise();
        widget->raise();
        textBrowser_IP_info->raise();
        label_3->raise();
        label_time->raise();
        widget_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 999, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QString());
        socket_info->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">xiaoxi</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257\357\274\232", nullptr));
        button_refresh->setText(QCoreApplication::translate("MainWindow", "refersh", nullptr));
        label_3->setText(QString());
        label_time->setText(QCoreApplication::translate("MainWindow", "no:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "PassWord:", nullptr));
        button_new->setText(QCoreApplication::translate("MainWindow", "button_new", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\347\224\250\346\210\267\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
