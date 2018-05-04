/********************************************************************************
** Form generated from reading UI file 'atab.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATAB_H
#define UI_ATAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TAtab_form
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TAtab_form)
    {
        if (TAtab_form->objectName().isEmpty())
            TAtab_form->setObjectName(QStringLiteral("TAtab_form"));
        TAtab_form->resize(489, 437);
        verticalLayout = new QVBoxLayout(TAtab_form);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        widget = new QWidget(TAtab_form);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(TAtab_form);
        if (tableWidget->columnCount() < 32)
            tableWidget->setColumnCount(32);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMaximumSize(QSize(16777215, 96));
        tableWidget->setColumnCount(32);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(64);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(TAtab_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TAtab_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TAtab_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TAtab_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TAtab_form);
    } // setupUi

    void retranslateUi(QDialog *TAtab_form)
    {
        TAtab_form->setWindowTitle(QApplication::translate("TAtab_form", "A-Tab", 0));
    } // retranslateUi

};

namespace Ui {
    class TAtab_form: public Ui_TAtab_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATAB_H
