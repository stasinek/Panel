/********************************************************************************
** Form generated from reading UI file 'lupa_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUPA_FORM_H
#define UI_LUPA_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TLupa_form
{
public:

    void setupUi(QDialog *TLupa_form)
    {
        if (TLupa_form->objectName().isEmpty())
            TLupa_form->setObjectName(QStringLiteral("TLupa_form"));
        TLupa_form->resize(400, 300);

        retranslateUi(TLupa_form);

        QMetaObject::connectSlotsByName(TLupa_form);
    } // setupUi

    void retranslateUi(QDialog *TLupa_form)
    {
        TLupa_form->setWindowTitle(QApplication::translate("TLupa_form", "Zoom", 0));
    } // retranslateUi

};

namespace Ui {
    class TLupa_form: public Ui_TLupa_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUPA_FORM_H
