/********************************************************************************
** Form generated from reading UI file 'qqlistviewgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLISTVIEWGROUP_H
#define UI_QQLISTVIEWGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQListViewGroup
{
public:
    QLabel *groupTitleLabel;
    QLabel *groupSubTitleLabel;
    QLabel *groupIconLabel;

    void setupUi(QWidget *QQListViewGroup)
    {
        if (QQListViewGroup->objectName().isEmpty())
            QQListViewGroup->setObjectName(QString::fromUtf8("QQListViewGroup"));
        QQListViewGroup->resize(315, 28);
        groupTitleLabel = new QLabel(QQListViewGroup);
        groupTitleLabel->setObjectName(QString::fromUtf8("groupTitleLabel"));
        groupTitleLabel->setGeometry(QRect(30, 8, 131, 16));
        groupSubTitleLabel = new QLabel(QQListViewGroup);
        groupSubTitleLabel->setObjectName(QString::fromUtf8("groupSubTitleLabel"));
        groupSubTitleLabel->setGeometry(QRect(200, 8, 62, 16));
        groupIconLabel = new QLabel(QQListViewGroup);
        groupIconLabel->setObjectName(QString::fromUtf8("groupIconLabel"));
        groupIconLabel->setGeometry(QRect(10, 10, 11, 11));

        retranslateUi(QQListViewGroup);

        QMetaObject::connectSlotsByName(QQListViewGroup);
    } // setupUi

    void retranslateUi(QWidget *QQListViewGroup)
    {
        QQListViewGroup->setWindowTitle(QCoreApplication::translate("QQListViewGroup", "Form", nullptr));
        groupTitleLabel->setText(QString());
        groupSubTitleLabel->setText(QString());
        groupIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQListViewGroup: public Ui_QQListViewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLISTVIEWGROUP_H
