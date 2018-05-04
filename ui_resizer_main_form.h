/********************************************************************************
** Form generated from reading UI file 'resizer_main_form.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESIZER_MAIN_FORM_H
#define UI_RESIZER_MAIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Resizer_main_form
{
public:
    QAction *actionInformacje;
    QAction *actionUstaw;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_Display;
    QComboBox *comboBox_X;
    QLabel *label_2;
    QComboBox *comboBox_Y;
    QComboBox *comboBox_BPP;
    QComboBox *comboBox_Hz;
    QLabel *label;
    QToolButton *toolButton_7;
    QToolButton *toolButton_5;
    QToolButton *toolButton_4;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout;
    QToolButton *toolButton_3;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Resizer_main_form)
    {
        if (Resizer_main_form->objectName().isEmpty())
            Resizer_main_form->setObjectName(QStringLiteral("Resizer_main_form"));
        Resizer_main_form->resize(462, 386);
        Resizer_main_form->setMinimumSize(QSize(400, 240));
        actionInformacje = new QAction(Resizer_main_form);
        actionInformacje->setObjectName(QStringLiteral("actionInformacje"));
        actionUstaw = new QAction(Resizer_main_form);
        actionUstaw->setObjectName(QStringLiteral("actionUstaw"));
        centralWidget = new QWidget(Resizer_main_form);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(-1, -1, -1, 5);
        comboBox_Display = new QComboBox(centralWidget);
        comboBox_Display->setObjectName(QStringLiteral("comboBox_Display"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_Display->sizePolicy().hasHeightForWidth());
        comboBox_Display->setSizePolicy(sizePolicy);
        comboBox_Display->setMinimumSize(QSize(35, 0));
        comboBox_Display->setMaximumSize(QSize(35, 16777215));
        comboBox_Display->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(comboBox_Display);

        comboBox_X = new QComboBox(centralWidget);
        comboBox_X->setObjectName(QStringLiteral("comboBox_X"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_X->sizePolicy().hasHeightForWidth());
        comboBox_X->setSizePolicy(sizePolicy1);
        comboBox_X->setMinimumSize(QSize(55, 0));
        comboBox_X->setMaximumSize(QSize(45, 16777215));

        horizontalLayout->addWidget(comboBox_X);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(8, 0));
        label_2->setMaximumSize(QSize(8, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        comboBox_Y = new QComboBox(centralWidget);
        comboBox_Y->setObjectName(QStringLiteral("comboBox_Y"));
        sizePolicy1.setHeightForWidth(comboBox_Y->sizePolicy().hasHeightForWidth());
        comboBox_Y->setSizePolicy(sizePolicy1);
        comboBox_Y->setMinimumSize(QSize(55, 0));
        comboBox_Y->setMaximumSize(QSize(45, 16777215));

        horizontalLayout->addWidget(comboBox_Y);

        comboBox_BPP = new QComboBox(centralWidget);
        comboBox_BPP->setObjectName(QStringLiteral("comboBox_BPP"));
        sizePolicy.setHeightForWidth(comboBox_BPP->sizePolicy().hasHeightForWidth());
        comboBox_BPP->setSizePolicy(sizePolicy);
        comboBox_BPP->setMinimumSize(QSize(40, 0));
        comboBox_BPP->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(comboBox_BPP);

        comboBox_Hz = new QComboBox(centralWidget);
        comboBox_Hz->setObjectName(QStringLiteral("comboBox_Hz"));
        sizePolicy1.setHeightForWidth(comboBox_Hz->sizePolicy().hasHeightForWidth());
        comboBox_Hz->setSizePolicy(sizePolicy1);
        comboBox_Hz->setMinimumSize(QSize(45, 0));
        comboBox_Hz->setMaximumSize(QSize(45, 16777215));

        horizontalLayout->addWidget(comboBox_Hz);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(10, 0));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(toolButton_7->sizePolicy().hasHeightForWidth());
        toolButton_7->setSizePolicy(sizePolicy3);
        toolButton_7->setMinimumSize(QSize(35, 25));

        horizontalLayout->addWidget(toolButton_7);

        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        sizePolicy3.setHeightForWidth(toolButton_5->sizePolicy().hasHeightForWidth());
        toolButton_5->setSizePolicy(sizePolicy3);
        toolButton_5->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(toolButton_5);

        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        sizePolicy3.setHeightForWidth(toolButton_4->sizePolicy().hasHeightForWidth());
        toolButton_4->setSizePolicy(sizePolicy3);
        toolButton_4->setMinimumSize(QSize(25, 25));

        horizontalLayout->addWidget(toolButton_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 5);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 5, -1);
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        sizePolicy3.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy3);
        toolButton_3->setMinimumSize(QSize(40, 25));

        gridLayout->addWidget(toolButton_3, 0, 0, 1, 1, Qt::AlignTop);


        horizontalLayout_3->addLayout(gridLayout);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setSceneRect(QRectF(0, 0, 100, 100));
        graphicsView->setRenderHints(QPainter::TextAntialiasing);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphicsView->setOptimizationFlags(QGraphicsView::IndirectPainting);

        horizontalLayout_3->addWidget(graphicsView);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 5);
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy4);
        toolButton_2->setMinimumSize(QSize(50, 25));
        toolButton_2->setMaximumSize(QSize(16777215, 50));
        toolButton_2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton_2, 0, Qt::AlignRight|Qt::AlignTop);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy5);
        toolButton->setMinimumSize(QSize(50, 25));
        toolButton->setMaximumSize(QSize(16777215, 50));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        Resizer_main_form->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Resizer_main_form);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Resizer_main_form->setStatusBar(statusBar);

        retranslateUi(Resizer_main_form);

        QMetaObject::connectSlotsByName(Resizer_main_form);
    } // setupUi

    void retranslateUi(QMainWindow *Resizer_main_form)
    {
        Resizer_main_form->setWindowTitle(QApplication::translate("Resizer_main_form", "Zmiana parametr\303\263w ekranu", 0));
        actionInformacje->setText(QApplication::translate("Resizer_main_form", "Informacje", 0));
        actionUstaw->setText(QApplication::translate("Resizer_main_form", "Ustaw", 0));
        comboBox_Display->clear();
        comboBox_Display->insertItems(0, QStringList()
         << QApplication::translate("Resizer_main_form", "1", 0)
         << QApplication::translate("Resizer_main_form", "2", 0)
         << QApplication::translate("Resizer_main_form", "3", 0)
         << QApplication::translate("Resizer_main_form", "4", 0)
        );
        comboBox_X->clear();
        comboBox_X->insertItems(0, QStringList()
         << QApplication::translate("Resizer_main_form", "320", 0)
         << QApplication::translate("Resizer_main_form", "400", 0)
         << QApplication::translate("Resizer_main_form", "512", 0)
         << QApplication::translate("Resizer_main_form", "640", 0)
         << QApplication::translate("Resizer_main_form", "720", 0)
         << QApplication::translate("Resizer_main_form", "800", 0)
         << QApplication::translate("Resizer_main_form", "960", 0)
         << QApplication::translate("Resizer_main_form", "1024", 0)
         << QApplication::translate("Resizer_main_form", "1152", 0)
         << QApplication::translate("Resizer_main_form", "1280", 0)
         << QApplication::translate("Resizer_main_form", "1440", 0)
         << QApplication::translate("Resizer_main_form", "1600", 0)
         << QApplication::translate("Resizer_main_form", "1920", 0)
         << QApplication::translate("Resizer_main_form", "2048", 0)
         << QApplication::translate("Resizer_main_form", "2560", 0)
         << QApplication::translate("Resizer_main_form", "2880", 0)
         << QApplication::translate("Resizer_main_form", "3200", 0)
         << QApplication::translate("Resizer_main_form", "3656", 0)
         << QApplication::translate("Resizer_main_form", "4096", 0)
        );
        label_2->setText(QApplication::translate("Resizer_main_form", "x", 0));
        comboBox_Y->clear();
        comboBox_Y->insertItems(0, QStringList()
         << QApplication::translate("Resizer_main_form", "200", 0)
         << QApplication::translate("Resizer_main_form", "240", 0)
         << QApplication::translate("Resizer_main_form", "300", 0)
         << QApplication::translate("Resizer_main_form", "384", 0)
         << QApplication::translate("Resizer_main_form", "400", 0)
         << QApplication::translate("Resizer_main_form", "480", 0)
         << QApplication::translate("Resizer_main_form", "540", 0)
         << QApplication::translate("Resizer_main_form", "576", 0)
         << QApplication::translate("Resizer_main_form", "600", 0)
         << QApplication::translate("Resizer_main_form", "720", 0)
         << QApplication::translate("Resizer_main_form", "768", 0)
         << QApplication::translate("Resizer_main_form", "800", 0)
         << QApplication::translate("Resizer_main_form", "864", 0)
         << QApplication::translate("Resizer_main_form", "900", 0)
         << QApplication::translate("Resizer_main_form", "960", 0)
         << QApplication::translate("Resizer_main_form", "1024", 0)
         << QApplication::translate("Resizer_main_form", "1080", 0)
         << QApplication::translate("Resizer_main_form", "1200", 0)
         << QApplication::translate("Resizer_main_form", "1440", 0)
         << QApplication::translate("Resizer_main_form", "1556", 0)
         << QApplication::translate("Resizer_main_form", "1600", 0)
         << QApplication::translate("Resizer_main_form", "1800", 0)
         << QApplication::translate("Resizer_main_form", "1920", 0)
         << QApplication::translate("Resizer_main_form", "2304", 0)
         << QApplication::translate("Resizer_main_form", "2400", 0)
         << QApplication::translate("Resizer_main_form", "2664", 0)
         << QApplication::translate("Resizer_main_form", "3112", 0)
        );
        comboBox_BPP->clear();
        comboBox_BPP->insertItems(0, QStringList()
         << QApplication::translate("Resizer_main_form", "16", 0)
         << QApplication::translate("Resizer_main_form", "24", 0)
         << QApplication::translate("Resizer_main_form", "32", 0)
        );
        comboBox_Hz->clear();
        comboBox_Hz->insertItems(0, QStringList()
         << QApplication::translate("Resizer_main_form", "50", 0)
         << QApplication::translate("Resizer_main_form", "60", 0)
         << QApplication::translate("Resizer_main_form", "70", 0)
         << QApplication::translate("Resizer_main_form", "75", 0)
         << QApplication::translate("Resizer_main_form", "85", 0)
         << QApplication::translate("Resizer_main_form", "100", 0)
         << QApplication::translate("Resizer_main_form", "120", 0)
         << QApplication::translate("Resizer_main_form", "240", 0)
        );
        label->setText(QApplication::translate("Resizer_main_form", "Hz", 0));
        toolButton_7->setText(QApplication::translate("Resizer_main_form", "OK", 0));
        toolButton_5->setText(QApplication::translate("Resizer_main_form", "?", 0));
        toolButton_4->setText(QApplication::translate("Resizer_main_form", "...", 0));
        toolButton_3->setText(QApplication::translate("Resizer_main_form", "LISTA", 0));
        toolButton_2->setText(QApplication::translate("Resizer_main_form", "<", 0));
        toolButton->setText(QApplication::translate("Resizer_main_form", ">", 0));
    } // retranslateUi

};

namespace Ui {
    class Resizer_main_form: public Ui_Resizer_main_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESIZER_MAIN_FORM_H
