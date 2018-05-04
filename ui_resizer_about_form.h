/********************************************************************************
** Form generated from reading UI file 'resizer_about_form.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZER_ABOUT_FORM_H
#define UI_RESIZER_ABOUT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resizer_about_form
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QToolButton *toolButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Resizer_about_form)
    {
        if (Resizer_about_form->objectName().isEmpty())
            Resizer_about_form->setObjectName(QStringLiteral("Resizer_about_form"));
        Resizer_about_form->resize(427, 300);
        verticalLayout = new QVBoxLayout(Resizer_about_form);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        tabWidget = new QTabWidget(Resizer_about_form);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"         border-top: 2px solid #C2C7CB;\n"
"     }\n"
"\n"
"     QTabWidget::tab-bar {\n"
"         left: 0px; /* move to the right by 5px */\n"
"     }\n"
"\n"
"     /* Style the tab using the tab sub-control. Note that\n"
"         it reads QTabBar _not_ QTabWidget */\n"
"     QTabBar::tab {\n"
"         background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                     stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                     stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"         border: 2px solid #C4C4C3;\n"
"         border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"         border-top-left-radius: 4px;\n"
"         border-top-right-radius: 4px;\n"
"         min-width: 8ex;\n"
"         padding: 2px;\n"
"     }\n"
"\n"
"     QTabBar::tab:selected, QTabBar::tab:hover {\n"
"         background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                     stop: 0 #fafafa, stop:"
                        " 0.4 #f4f4f4,\n"
"                                     stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);\n"
"     }\n"
"\n"
"     QTabBar::tab:selected {\n"
"         border-color: #9B9B9B;\n"
"         border-bottom-color: #C2C7CB; /* same as pane color */\n"
"     }\n"
"\n"
"     QTabBar::tab:!selected {\n"
"         margin-top: 5px; /* make non-selected tabs look smaller */\n"
"     }"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setFrameShape(QFrame::Box);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(Resizer_about_form);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 8px;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
"     background-color: #FF0000;\n"
"     width: 10px;\n"
" }"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        horizontalLayout->addWidget(progressBar);

        toolButton = new QToolButton(Resizer_about_form);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Resizer_about_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Resizer_about_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), Resizer_about_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Resizer_about_form, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Resizer_about_form);
    } // setupUi

    void retranslateUi(QDialog *Resizer_about_form)
    {
        Resizer_about_form->setWindowTitle(QApplication::translate("Resizer_about_form", "Dialog", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Resizer_about_form", "Podstawowe informacje", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Resizer_about_form", "LICENCJA", 0));
        toolButton->setText(QApplication::translate("Resizer_about_form", "e-mail: sstsoft@wp.pl, http://www.facebook.com/sstsoft", 0));
    } // retranslateUi

};

namespace Ui {
    class Resizer_about_form: public Ui_Resizer_about_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZER_ABOUT_FORM_H
