/********************************************************************************
** Form generated from reading UI file 'arnold_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARNOLD_FORM_H
#define UI_ARNOLD_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TArne_form
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QListView *listView;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_5;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *toolButton_7;
    QFrame *line;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TArne_form)
    {
        if (TArne_form->objectName().isEmpty())
            TArne_form->setObjectName(QStringLiteral("TArne_form"));
        TArne_form->resize(415, 321);
        centralWidget = new QWidget(TArne_form);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(8, 8, 8, 8);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout_5->addLayout(gridLayout);

        listView = new QListView(page);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setFrameShape(QFrame::Box);
        listView->setFrameShadow(QFrame::Plain);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(listView);

        line_3 = new QFrame(page);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_5 = new QToolButton(page);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(24, 24));

        horizontalLayout->addWidget(toolButton_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_2 = new QToolButton(page);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(120, 24));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(page);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(120, 24));

        horizontalLayout->addWidget(toolButton_3);

        toolButton = new QToolButton(page);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(24, 24));
        toolButton->setIconSize(QSize(32, 32));
        toolButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(toolButton);


        verticalLayout_5->addLayout(horizontalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(page_2);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_7->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_7->addWidget(lineEdit_2);


        horizontalLayout_3->addLayout(verticalLayout_7);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));

        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget_2);


        verticalLayout_4->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButton_6 = new QToolButton(page_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(toolButton_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        toolButton_7 = new QToolButton(page_2);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setMinimumSize(QSize(0, 24));

        horizontalLayout_2->addWidget(toolButton_7);


        verticalLayout_4->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);


        verticalLayout_2->addLayout(verticalLayout);

        TArne_form->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TArne_form);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 415, 18));
        TArne_form->setMenuBar(menuBar);
        statusBar = new QStatusBar(TArne_form);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TArne_form->setStatusBar(statusBar);

        retranslateUi(TArne_form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TArne_form);
    } // setupUi

    void retranslateUi(QMainWindow *TArne_form)
    {
        TArne_form->setWindowTitle(QApplication::translate("TArne_form", "MainWindow", 0));
        toolButton_5->setText(QApplication::translate("TArne_form", "...", 0));
        toolButton_2->setText(QApplication::translate("TArne_form", "Get more", 0));
        toolButton_3->setText(QApplication::translate("TArne_form", "Mark all as readed", 0));
        toolButton->setText(QApplication::translate("TArne_form", "X", 0));
        pushButton->setText(QApplication::translate("TArne_form", "PushButton", 0));
        toolButton_6->setText(QApplication::translate("TArne_form", "...", 0));
        toolButton_7->setText(QApplication::translate("TArne_form", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class TArne_form: public Ui_TArne_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARNOLD_FORM_H
