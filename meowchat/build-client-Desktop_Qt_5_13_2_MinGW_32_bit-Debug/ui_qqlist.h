/********************************************************************************
** Form generated from reading UI file 'qqlist.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLIST_H
#define UI_QQLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qqlist
{
public:

    void setupUi(QWidget *qqlist)
    {
        if (qqlist->objectName().isEmpty())
            qqlist->setObjectName(QString::fromUtf8("qqlist"));
        qqlist->resize(400, 300);

        retranslateUi(qqlist);

        QMetaObject::connectSlotsByName(qqlist);
    } // setupUi

    void retranslateUi(QWidget *qqlist)
    {
        qqlist->setWindowTitle(QCoreApplication::translate("qqlist", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qqlist: public Ui_qqlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLIST_H
