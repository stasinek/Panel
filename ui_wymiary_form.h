/********************************************************************************
** Form generated from reading UI file 'wymiary_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYMIARY_FORM_H
#define UI_WYMIARY_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Wymiary_form
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *Wymiary_form)
    {
        if (Wymiary_form->objectName().isEmpty())
            Wymiary_form->setObjectName(QStringLiteral("Wymiary_form"));
        Wymiary_form->resize(506, 377);
        gridLayout = new QGridLayout(Wymiary_form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setContentsMargins(8, 8, 8, 8);
        buttonBox = new QDialogButtonBox(Wymiary_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1, Qt::AlignRight|Qt::AlignBottom);

        tableView = new QTableView(Wymiary_form);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);


        retranslateUi(Wymiary_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), Wymiary_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Wymiary_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(Wymiary_form);
    } // setupUi

    void retranslateUi(QDialog *Wymiary_form)
    {
        Wymiary_form->setWindowTitle(QApplication::translate("Wymiary_form", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Wymiary_form: public Ui_Wymiary_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYMIARY_FORM_H
