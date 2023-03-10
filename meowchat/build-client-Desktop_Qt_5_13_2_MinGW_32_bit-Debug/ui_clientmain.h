/********************************************************************************
** Form generated from reading UI file 'clientmain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMAIN_H
#define UI_CLIENTMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qqlistwidget.h>

QT_BEGIN_NAMESPACE

class Ui_clientmain
{
public:
    QLabel *label;
    QLabel *label_selfIcon;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QWidget *widget;
    QToolButton *btnFriend;
    QToolButton *btnGroup;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_4;
    QTabWidget *tabWidgetFriends;
    QWidget *tab;
    QListWidget *friendListWidget2;
    QWidget *tab_2;
    QQListWidget *friendListWidget;
    QToolButton *btnRefresh;
    QWidget *page_2;
    QLabel *label_5;
    QTabWidget *tabWidget_group;
    QWidget *tab_3;
    QQListWidget *groupListWidget;
    QWidget *tab_4;
    QWidget *page_3;
    QLabel *label_6;
    QTextBrowser *textBrowser_addFri;
    QLabel *label_2;
    QLineEdit *lineEdit_addID;
    QPushButton *btn_addFriend;
    QLabel *label_8;
    QWidget *page_4;
    QLabel *label_7;
    QPushButton *on_pushButton_2;
    QLineEdit *lineEdit_delete;
    QLabel *label_9;
    QLabel *label_10;
    QTextBrowser *textBrowser_delete;
    QComboBox *comboBox;

    void setupUi(QWidget *clientmain)
    {
        if (clientmain->objectName().isEmpty())
            clientmain->setObjectName(QString::fromUtf8("clientmain"));
        clientmain->resize(429, 714);
        label = new QLabel(clientmain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 421, 691));
        label->setPixmap(QPixmap(QString::fromUtf8(":/reses/res/backgroud/bac_cat1.jpg")));
        label->setScaledContents(true);
        label_selfIcon = new QLabel(clientmain);
        label_selfIcon->setObjectName(QString::fromUtf8("label_selfIcon"));
        label_selfIcon->setGeometry(QRect(10, 20, 81, 81));
        label_selfIcon->setPixmap(QPixmap(QString::fromUtf8(":/reses/res/icons/icon_cat8.jpg")));
        label_selfIcon->setScaledContents(true);
        label_3 = new QLabel(clientmain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 20, 72, 15));
        lineEdit = new QLineEdit(clientmain);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 60, 201, 21));
        widget = new QWidget(clientmain);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 540, 381, 101));
        btnFriend = new QToolButton(widget);
        btnFriend->setObjectName(QString::fromUtf8("btnFriend"));
        btnFriend->setGeometry(QRect(20, 10, 71, 71));
        btnGroup = new QToolButton(widget);
        btnGroup->setObjectName(QString::fromUtf8("btnGroup"));
        btnGroup->setGeometry(QRect(110, 10, 71, 71));
        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(200, 10, 71, 71));
        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setGeometry(QRect(290, 10, 71, 71));
        stackedWidget = new QStackedWidget(clientmain);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 120, 371, 411));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 341, 31));
        tabWidgetFriends = new QTabWidget(page);
        tabWidgetFriends->setObjectName(QString::fromUtf8("tabWidgetFriends"));
        tabWidgetFriends->setGeometry(QRect(10, 40, 351, 351));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        friendListWidget2 = new QListWidget(tab);
        friendListWidget2->setObjectName(QString::fromUtf8("friendListWidget2"));
        friendListWidget2->setGeometry(QRect(10, 10, 321, 301));
        tabWidgetFriends->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        friendListWidget = new QQListWidget(tab_2);
        friendListWidget->setObjectName(QString::fromUtf8("friendListWidget"));
        friendListWidget->setGeometry(QRect(15, 60, 301, 192));
        tabWidgetFriends->addTab(tab_2, QString());
        btnRefresh = new QToolButton(page);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(60, 0, 71, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 0, 341, 31));
        tabWidget_group = new QTabWidget(page_2);
        tabWidget_group->setObjectName(QString::fromUtf8("tabWidget_group"));
        tabWidget_group->setGeometry(QRect(20, 50, 321, 341));
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        groupListWidget = new QQListWidget(tab_3);
        groupListWidget->setObjectName(QString::fromUtf8("groupListWidget"));
        groupListWidget->setGeometry(QRect(0, 10, 301, 301));
        tabWidget_group->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_group->addTab(tab_4, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 341, 31));
        textBrowser_addFri = new QTextBrowser(page_3);
        textBrowser_addFri->setObjectName(QString::fromUtf8("textBrowser_addFri"));
        textBrowser_addFri->setGeometry(QRect(10, 290, 351, 111));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 171, 16));
        lineEdit_addID = new QLineEdit(page_3);
        lineEdit_addID->setObjectName(QString::fromUtf8("lineEdit_addID"));
        lineEdit_addID->setGeometry(QRect(170, 60, 161, 21));
        btn_addFriend = new QPushButton(page_3);
        btn_addFriend->setObjectName(QString::fromUtf8("btn_addFriend"));
        btn_addFriend->setGeometry(QRect(100, 110, 141, 71));
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 270, 111, 16));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 341, 31));
        on_pushButton_2 = new QPushButton(page_4);
        on_pushButton_2->setObjectName(QString::fromUtf8("on_pushButton_2"));
        on_pushButton_2->setGeometry(QRect(100, 100, 141, 71));
        lineEdit_delete = new QLineEdit(page_4);
        lineEdit_delete->setObjectName(QString::fromUtf8("lineEdit_delete"));
        lineEdit_delete->setGeometry(QRect(170, 50, 161, 21));
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 260, 111, 16));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 50, 171, 16));
        textBrowser_delete = new QTextBrowser(page_4);
        textBrowser_delete->setObjectName(QString::fromUtf8("textBrowser_delete"));
        textBrowser_delete->setGeometry(QRect(10, 280, 351, 111));
        stackedWidget->addWidget(page_4);
        comboBox = new QComboBox(clientmain);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(310, 60, 91, 21));

        retranslateUi(clientmain);

        stackedWidget->setCurrentIndex(0);
        tabWidgetFriends->setCurrentIndex(0);
        tabWidget_group->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(clientmain);
    } // setupUi

    void retranslateUi(QWidget *clientmain)
    {
        clientmain->setWindowTitle(QCoreApplication::translate("clientmain", "Form", nullptr));
        label->setText(QString());
        label_selfIcon->setText(QString());
        label_3->setText(QCoreApplication::translate("clientmain", "yo", nullptr));
        lineEdit->setText(QCoreApplication::translate("clientmain", "\344\270\226\347\225\214\350\277\231\344\271\210\345\244\247\357\274\214\346\210\221\346\203\263\345\216\273\347\234\213\347\234\213\357\274\201", nullptr));
        btnFriend->setText(QCoreApplication::translate("clientmain", "\345\245\275\345\217\213", nullptr));
        btnGroup->setText(QCoreApplication::translate("clientmain", "\347\276\244\350\201\212", nullptr));
        toolButton_3->setText(QCoreApplication::translate("clientmain", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        toolButton_4->setText(QCoreApplication::translate("clientmain", "\345\210\240\351\231\244\345\245\275\345\217\213", nullptr));
        label_4->setText(QCoreApplication::translate("clientmain", "\345\245\275\345\217\213", nullptr));
        tabWidgetFriends->setTabText(tabWidgetFriends->indexOf(tab), QCoreApplication::translate("clientmain", "\345\255\235\351\231\265\345\215\253\345\220\214\345\255\246", nullptr));
        tabWidgetFriends->setTabText(tabWidgetFriends->indexOf(tab_2), QCoreApplication::translate("clientmain", "\345\214\227\344\272\254\345\244\247\345\255\246\345\220\214\345\255\246", nullptr));
        btnRefresh->setText(QCoreApplication::translate("clientmain", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        label_5->setText(QCoreApplication::translate("clientmain", "\347\276\244\350\201\212", nullptr));
        tabWidget_group->setTabText(tabWidget_group->indexOf(tab_3), QCoreApplication::translate("clientmain", "Tab 1", nullptr));
        tabWidget_group->setTabText(tabWidget_group->indexOf(tab_4), QCoreApplication::translate("clientmain", "Tab 2", nullptr));
        label_6->setText(QCoreApplication::translate("clientmain", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        label_2->setText(QCoreApplication::translate("clientmain", "\350\276\223\345\205\245\350\246\201\346\267\273\345\212\240\347\232\204\345\245\275\345\217\213ID\357\274\232", nullptr));
        btn_addFriend->setText(QCoreApplication::translate("clientmain", "\346\267\273\345\212\240", nullptr));
        label_8->setText(QCoreApplication::translate("clientmain", "\346\223\215\344\275\234\344\277\241\346\201\257\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("clientmain", "\345\210\240\351\231\244\345\245\275\345\217\213", nullptr));
        on_pushButton_2->setText(QCoreApplication::translate("clientmain", "\347\241\256\350\256\244\345\210\240\351\231\244", nullptr));
        label_9->setText(QCoreApplication::translate("clientmain", "\346\223\215\344\275\234\344\277\241\346\201\257\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("clientmain", "\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\245\275\345\217\213ID\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("clientmain", "\346\210\221\345\234\250\344\270\212\347\272\277", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("clientmain", "\347\246\273\347\272\277", nullptr));

    } // retranslateUi

};

namespace Ui {
    class clientmain: public Ui_clientmain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMAIN_H
