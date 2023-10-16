/********************************************************************************
** Form generated from reading UI file 'zeus_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEUS_FORM_H
#define UI_ZEUS_FORM_H

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
#include <QtWidgets/QToolButton>
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
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
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
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(8, 8, 8, 8);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(tab);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tab);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(toolButton_3);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

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

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TZeus_form);
    } // setupUi

    void retranslateUi(QDialog *TZeus_form)
    {
        TZeus_form->setWindowTitle(QApplication::translate("TZeus_form", "Zeus", 0));
        toolButton->setText(QApplication::translate("TZeus_form", "...", 0));
        toolButton_2->setText(QApplication::translate("TZeus_form", "...", 0));
        toolButton_3->setText(QApplication::translate("TZeus_form", "...", 0));
        pushButton_2->setText(QApplication::translate("TZeus_form", "Kil", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TZeus_form", "WINDOWS LIST", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TZeus_form", "PROCESS LIST", 0));
    } // retranslateUi

};

namespace Ui {
    class TZeus_form: public Ui_TZeus_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEUS_FORM_H
