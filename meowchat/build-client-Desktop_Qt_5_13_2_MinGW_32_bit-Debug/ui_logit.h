/********************************************************************************
** Form generated from reading UI file 'logit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIT_H
#define UI_LOGIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logit
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QFrame *frame;
    QPushButton *pushButton_register2;
    QPushButton *Button_back;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_ID2;
    QLabel *label_2;
    QLineEdit *lineEdit_password2;
    QLabel *label_4;
    QLabel *label_10;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QTextBrowser *text_logitInfo;
    QFrame *frame_2;
    QPushButton *Button_logit;
    QLabel *labelUserHead;
    QPushButton *Button_register;
    QLineEdit *lineEdit_ID;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QFrame *frame_3;
    QPushButton *Button_connect;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_IP;
    QLabel *label_7;
    QLineEdit *lineEdit_info;
    QLabel *label_8;
    QLineEdit *lineEdit_file;
    QGroupBox *groupBox_3;
    QTextBrowser *text_logitInfo_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logit)
    {
        if (logit->objectName().isEmpty())
            logit->setObjectName(QString::fromUtf8("logit"));
        logit->resize(959, 698);
        centralwidget = new QWidget(logit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(50, 10, 891, 631));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(430, 50, 301, 221));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(11, 31, 271, 161));
        frame = new QFrame(page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(460, 310, 251, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_register2 = new QPushButton(frame);
        pushButton_register2->setObjectName(QString::fromUtf8("pushButton_register2"));
        pushButton_register2->setGeometry(QRect(10, 80, 93, 28));
        Button_back = new QPushButton(frame);
        Button_back->setObjectName(QString::fromUtf8("Button_back"));
        Button_back->setGeometry(QRect(140, 80, 93, 28));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 225, 51));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_ID2 = new QLineEdit(layoutWidget);
        lineEdit_ID2->setObjectName(QString::fromUtf8("lineEdit_ID2"));

        gridLayout->addWidget(lineEdit_ID2, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_password2 = new QLineEdit(layoutWidget);
        lineEdit_password2->setObjectName(QString::fromUtf8("lineEdit_password2"));

        gridLayout->addWidget(lineEdit_password2, 1, 1, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-10, 10, 911, 721));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/reses/res/backgroud/bac_cat2.jpg")));
        label_4->setScaledContents(true);
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(130, 40, 201, 151));
        stackedWidget->addWidget(page);
        label_4->raise();
        groupBox->raise();
        frame->raise();
        label_10->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 70, 301, 221));
        text_logitInfo = new QTextBrowser(groupBox_2);
        text_logitInfo->setObjectName(QString::fromUtf8("text_logitInfo"));
        text_logitInfo->setGeometry(QRect(20, 30, 271, 161));
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(400, 350, 311, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        Button_logit = new QPushButton(frame_2);
        Button_logit->setObjectName(QString::fromUtf8("Button_logit"));
        Button_logit->setGeometry(QRect(90, 80, 93, 28));
        labelUserHead = new QLabel(frame_2);
        labelUserHead->setObjectName(QString::fromUtf8("labelUserHead"));
        labelUserHead->setGeometry(QRect(10, 10, 61, 61));
        labelUserHead->setPixmap(QPixmap(QString::fromUtf8(":/reses/res/icons/icon_cat8.jpg")));
        labelUserHead->setScaledContents(true);
        Button_register = new QPushButton(frame_2);
        Button_register->setObjectName(QString::fromUtf8("Button_register"));
        Button_register->setGeometry(QRect(210, 80, 93, 28));
        lineEdit_ID = new QLineEdit(frame_2);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(130, 12, 171, 21));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(78, 40, 45, 16));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(78, 12, 31, 16));
        lineEdit_password = new QLineEdit(frame_2);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(130, 40, 171, 21));
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(70, 100, 311, 211));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        Button_connect = new QPushButton(frame_3);
        Button_connect->setObjectName(QString::fromUtf8("Button_connect"));
        Button_connect->setGeometry(QRect(100, 120, 121, 61));
        layoutWidget1 = new QWidget(frame_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 11, 285, 79));
        gridLayout_3 = new QGridLayout(layoutWidget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(layoutWidget1);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));

        gridLayout_3->addWidget(lineEdit_IP, 0, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_info = new QLineEdit(layoutWidget1);
        lineEdit_info->setObjectName(QString::fromUtf8("lineEdit_info"));

        gridLayout_3->addWidget(lineEdit_info, 1, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 2, 0, 1, 1);

        lineEdit_file = new QLineEdit(layoutWidget1);
        lineEdit_file->setObjectName(QString::fromUtf8("lineEdit_file"));

        gridLayout_3->addWidget(lineEdit_file, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 360, 301, 221));
        text_logitInfo_5 = new QTextBrowser(groupBox_3);
        text_logitInfo_5->setObjectName(QString::fromUtf8("text_logitInfo_5"));
        text_logitInfo_5->setGeometry(QRect(20, 30, 271, 161));
        stackedWidget->addWidget(page_2);
        logit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 959, 26));
        logit->setMenuBar(menubar);
        statusbar = new QStatusBar(logit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        logit->setStatusBar(statusbar);

        retranslateUi(logit);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(logit);
    } // setupUi

    void retranslateUi(QMainWindow *logit)
    {
        logit->setWindowTitle(QCoreApplication::translate("logit", "logit", nullptr));
        groupBox->setTitle(QCoreApplication::translate("logit", "\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", nullptr));
        pushButton_register2->setText(QCoreApplication::translate("logit", "\346\263\250\345\206\214", nullptr));
        Button_back->setText(QCoreApplication::translate("logit", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("logit", "ID\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("logit", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QString());
        label_10->setText(QCoreApplication::translate("logit", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#aaaaff;\">\347\224\250\346\210\267\346\263\250\345\206\214</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("logit", "\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", nullptr));
        Button_logit->setText(QCoreApplication::translate("logit", "\347\231\273\345\275\225", nullptr));
        labelUserHead->setText(QString());
        Button_register->setText(QCoreApplication::translate("logit", "\346\263\250\345\206\214", nullptr));
        lineEdit_ID->setPlaceholderText(QCoreApplication::translate("logit", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("logit", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("logit", "ID\357\274\232", nullptr));
        Button_connect->setText(QCoreApplication::translate("logit", "\350\277\236\346\216\245", nullptr));
        label_6->setText(QCoreApplication::translate("logit", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("logit", "\344\277\241\346\201\257\344\274\240\350\276\223\347\253\257\345\217\243\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("logit", "\346\226\207\344\273\266\344\274\240\350\276\223\347\253\257\345\217\243\357\274\232", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("logit", "\346\217\220\347\244\272\344\277\241\346\201\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logit: public Ui_logit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIT_H
