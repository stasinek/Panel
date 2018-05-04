/********************************************************************************
** Form generated from reading UI file 'zeus.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEUS_H
#define UI_ZEUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TZeus_form
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TZeus_form)
    {
        if (TZeus_form->objectName().isEmpty())
            TZeus_form->setObjectName(QStringLiteral("TZeus_form"));
        TZeus_form->resize(650, 364);
        verticalLayout = new QVBoxLayout(TZeus_form);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        tabWidget = new QTabWidget(TZeus_form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(TZeus_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TZeus_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TZeus_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TZeus_form, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TZeus_form);
    } // setupUi

    void retranslateUi(QDialog *TZeus_form)
    {
        TZeus_form->setWindowTitle(QApplication::translate("TZeus_form", "Zeus", 0));
        pushButton_2->setText(QApplication::translate("TZeus_form", "Kill", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TZeus_form", "Lista okien", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TZeus_form", "Lista procesow", 0));
    } // retranslateUi

};

namespace Ui {
    class TZeus_form: public Ui_TZeus_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEUS_H
