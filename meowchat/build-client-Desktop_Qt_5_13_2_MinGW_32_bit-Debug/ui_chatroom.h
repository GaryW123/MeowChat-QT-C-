/********************************************************************************
** Form generated from reading UI file 'chatroom.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOM_H
#define UI_CHATROOM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <bubblechating.h>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinTitle;
    QWidget *widgetFileBoard;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetFileInfo;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEditTotalSize;
    QLabel *label_4;
    QLineEdit *lineEditCurrSize;
    QLabel *label_5;
    QLineEdit *lineEditRate;
    QSpacerItem *verticalSpacer;
    QTableView *tableViewGroups;
    QPushButton *btnWinClose;
    QPushButton *btnWinMin;
    QLabel *labelWinIcon;
    QLabel *label_6;
    QWidget *widgetMsg;
    QPushButton *btnAction;
    QPushButton *btnSendMsg;
    QTextEdit *textEditMsg;
    QLabel *label;
    QPushButton *btnClose;
    BubbleList *widgetBubble;
    QWidget *widgetSetting;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *btnSendFile;
    QToolButton *toolButton_7;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(997, 557);
        widgetWinTitle = new QWidget(ChatWindow);
        widgetWinTitle->setObjectName(QString::fromUtf8("widgetWinTitle"));
        widgetWinTitle->setGeometry(QRect(130, 0, 719, 30));
        widgetWinTitle->setMinimumSize(QSize(0, 30));
        widgetWinTitle->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_2 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName(QString::fromUtf8("labelWinTitle"));
        labelWinTitle->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));

        horizontalLayout_2->addWidget(labelWinTitle);

        widgetFileBoard = new QWidget(ChatWindow);
        widgetFileBoard->setObjectName(QString::fromUtf8("widgetFileBoard"));
        widgetFileBoard->setGeometry(QRect(670, 40, 271, 301));
        widgetFileBoard->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border: none;\n"
"	border-radius:0px;\n"
"	background-color: #05CE26;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	border: 1px solid grey;\n"
"    border-radius: 0px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #05B8CC;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widgetFileBoard);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widgetFileInfo = new QWidget(widgetFileBoard);
        widgetFileInfo->setObjectName(QString::fromUtf8("widgetFileInfo"));
        verticalLayout_6 = new QVBoxLayout(widgetFileInfo);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widgetFileInfo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        progressBar = new QProgressBar(widgetFileInfo);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 15));
        progressBar->setValue(0);
        progressBar->setInvertedAppearance(false);

        verticalLayout_4->addWidget(progressBar);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(widgetFileInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditTotalSize = new QLineEdit(widgetFileInfo);
        lineEditTotalSize->setObjectName(QString::fromUtf8("lineEditTotalSize"));
        lineEditTotalSize->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditTotalSize);

        label_4 = new QLabel(widgetFileInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditCurrSize = new QLineEdit(widgetFileInfo);
        lineEditCurrSize->setObjectName(QString::fromUtf8("lineEditCurrSize"));
        lineEditCurrSize->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditCurrSize);

        label_5 = new QLabel(widgetFileInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEditRate = new QLineEdit(widgetFileInfo);
        lineEditRate->setObjectName(QString::fromUtf8("lineEditRate"));
        lineEditRate->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditRate);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(widgetFileInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tableViewGroups = new QTableView(widgetFileBoard);
        tableViewGroups->setObjectName(QString::fromUtf8("tableViewGroups"));

        verticalLayout_5->addWidget(tableViewGroups);

        verticalLayout_5->setStretch(2, 1);
        btnWinClose = new QPushButton(ChatWindow);
        btnWinClose->setObjectName(QString::fromUtf8("btnWinClose"));
        btnWinClose->setGeometry(QRect(960, 0, 33, 29));
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon);
        btnWinMin = new QPushButton(ChatWindow);
        btnWinMin->setObjectName(QString::fromUtf8("btnWinMin"));
        btnWinMin->setGeometry(QRect(920, 0, 33, 29));
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon1);
        labelWinIcon = new QLabel(ChatWindow);
        labelWinIcon->setObjectName(QString::fromUtf8("labelWinIcon"));
        labelWinIcon->setGeometry(QRect(50, 0, 30, 30));
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(30, 30));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));
        label_6 = new QLabel(ChatWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 991, 551));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/reses/res/backgroud/bac_cat3.jpg")));
        label_6->setScaledContents(true);
        widgetMsg = new QWidget(ChatWindow);
        widgetMsg->setObjectName(QString::fromUtf8("widgetMsg"));
        widgetMsg->setGeometry(QRect(15, 399, 641, 151));
        widgetMsg->setMinimumSize(QSize(0, 100));
        btnAction = new QPushButton(widgetMsg);
        btnAction->setObjectName(QString::fromUtf8("btnAction"));
        btnAction->setGeometry(QRect(600, 110, 41, 28));
        btnSendMsg = new QPushButton(widgetMsg);
        btnSendMsg->setObjectName(QString::fromUtf8("btnSendMsg"));
        btnSendMsg->setGeometry(QRect(510, 110, 93, 28));
        btnSendMsg->setStyleSheet(QString::fromUtf8(""));
        textEditMsg = new QTextEdit(widgetMsg);
        textEditMsg->setObjectName(QString::fromUtf8("textEditMsg"));
        textEditMsg->setGeometry(QRect(0, 0, 641, 100));
        textEditMsg->setMaximumSize(QSize(16777215, 100));
        label = new QLabel(widgetMsg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1, 108, 132, 16));
        btnClose = new QPushButton(widgetMsg);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(406, 110, 93, 28));
        widgetBubble = new BubbleList(ChatWindow);
        widgetBubble->setObjectName(QString::fromUtf8("widgetBubble"));
        widgetBubble->setGeometry(QRect(15, 51, 641, 200));
        widgetBubble->setMinimumSize(QSize(200, 200));
        widgetSetting = new QWidget(ChatWindow);
        widgetSetting->setObjectName(QString::fromUtf8("widgetSetting"));
        widgetSetting->setGeometry(QRect(20, 280, 634, 30));
        widgetSetting->setMinimumSize(QSize(0, 30));
        widgetSetting->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(widgetSetting);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(widgetSetting);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/common/ic_font.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widgetSetting);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/common/ic_smile.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon3);

        horizontalLayout_3->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widgetSetting);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/common/ic_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon4);

        horizontalLayout_3->addWidget(toolButton_4);

        btnSendFile = new QToolButton(widgetSetting);
        btnSendFile->setObjectName(QString::fromUtf8("btnSendFile"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/common/ic_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSendFile->setIcon(icon5);

        horizontalLayout_3->addWidget(btnSendFile);

        toolButton_7 = new QToolButton(widgetSetting);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/common/ic_picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon6);

        horizontalLayout_3->addWidget(toolButton_7);

        toolButton_6 = new QToolButton(widgetSetting);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/common/ic_cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon7);

        horizontalLayout_3->addWidget(toolButton_6);

        horizontalSpacer = new QSpacerItem(396, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton = new QToolButton(widgetSetting);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resource/common/ic_notes.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon8);

        horizontalLayout_3->addWidget(toolButton);

        label_6->raise();
        widgetWinTitle->raise();
        widgetFileBoard->raise();
        btnWinClose->raise();
        btnWinMin->raise();
        labelWinIcon->raise();

        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "Form", nullptr));
        labelWinTitle->setText(QCoreApplication::translate("ChatWindow", "\344\270\216 XXX \350\201\212\345\244\251\344\270\255", nullptr));
        label_2->setText(QCoreApplication::translate("ChatWindow", "\346\226\207\344\273\266\344\274\240\350\276\223\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ChatWindow", "\346\200\273\345\244\247\345\260\217:", nullptr));
        lineEditTotalSize->setText(QCoreApplication::translate("ChatWindow", "0 KB", nullptr));
        label_4->setText(QCoreApplication::translate("ChatWindow", "\345\267\262\344\274\240\350\276\223\357\274\232", nullptr));
        lineEditCurrSize->setText(QCoreApplication::translate("ChatWindow", "0 KB", nullptr));
        label_5->setText(QCoreApplication::translate("ChatWindow", "\351\200\237\347\216\207\357\274\232", nullptr));
        lineEditRate->setText(QCoreApplication::translate("ChatWindow", "10 M/S", nullptr));
        btnWinClose->setText(QString());
        btnWinMin->setText(QString());
        labelWinIcon->setText(QString());
        label_6->setText(QString());
        btnAction->setText(QString());
#if QT_CONFIG(tooltip)
        btnSendMsg->setToolTip(QCoreApplication::translate("ChatWindow", "\345\217\221\351\200\201\350\201\212\345\244\251\346\266\210\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSendMsg->setText(QCoreApplication::translate("ChatWindow", "\345\217\221\351\200\201(&S)", nullptr));
        label->setText(QCoreApplication::translate("ChatWindow", "\345\255\227\347\254\246\351\231\220\345\210\266: 0 / 255", nullptr));
#if QT_CONFIG(tooltip)
        btnClose->setToolTip(QCoreApplication::translate("ChatWindow", "\345\205\263\351\227\255\345\275\223\345\211\215\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClose->setText(QCoreApplication::translate("ChatWindow", "\345\205\263\351\227\255(&C)", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_2->setToolTip(QCoreApplication::translate("ChatWindow", "\344\277\256\346\224\271\350\201\212\345\244\251\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_3->setToolTip(QCoreApplication::translate("ChatWindow", "\346\217\222\345\205\245\350\241\250\346\203\205", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_4->setToolTip(QCoreApplication::translate("ChatWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_4->setText(QString());
#if QT_CONFIG(tooltip)
        btnSendFile->setToolTip(QCoreApplication::translate("ChatWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSendFile->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_7->setToolTip(QCoreApplication::translate("ChatWindow", "\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_7->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_6->setToolTip(QCoreApplication::translate("ChatWindow", "\346\210\252\345\261\217", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_6->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton->setToolTip(QCoreApplication::translate("ChatWindow", "\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOM_H
