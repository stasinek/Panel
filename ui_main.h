/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TMain_form
{
public:
    QAction *actionExit;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QToolButton *SpeedButtonMenu;
    QToolButton *SpeedButtonZeus;
    QHBoxLayout *horizontalLayout;
    QToolButton *SpeedButtonDeskGrid;
    QToolButton *SpeedButtonDesk1;
    QToolButton *SpeedButtonDesk2;
    QToolButton *SpeedButtonDesk3;
    QToolButton *SpeedButtonDesk4;
    QToolButton *SpeedButtonDesk5;
    QFrame *line_2;
    QToolButton *SpeedButtonLupa;
    QToolButton *SpeedButtonMinimize;

    void setupUi(QDialog *TMain_form)
    {
        if (TMain_form->objectName().isEmpty())
            TMain_form->setObjectName(QStringLiteral("TMain_form"));
        TMain_form->resize(393, 42);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TMain_form->sizePolicy().hasHeightForWidth());
        TMain_form->setSizePolicy(sizePolicy);
        actionExit = new QAction(TMain_form);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        verticalLayout = new QVBoxLayout(TMain_form);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(TMain_form);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(2);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(24, 24));
        frame->setMaximumSize(QSize(32, 32));
        frame->setCursor(QCursor(Qt::SizeAllCursor));
        frame->setMouseTracking(false);
        frame->setContextMenuPolicy(Qt::ActionsContextMenu);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 127);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);

        horizontalLayout_3->addWidget(frame);

        SpeedButtonMenu = new QToolButton(frame_2);
        SpeedButtonMenu->setObjectName(QStringLiteral("SpeedButtonMenu"));
        SpeedButtonMenu->setMinimumSize(QSize(24, 24));
        SpeedButtonMenu->setMaximumSize(QSize(32, 32));
        SpeedButtonMenu->setContextMenuPolicy(Qt::ActionsContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/bmp/menu.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonMenu->setIcon(icon);
        SpeedButtonMenu->setPopupMode(QToolButton::InstantPopup);
        SpeedButtonMenu->setAutoRaise(true);

        horizontalLayout_3->addWidget(SpeedButtonMenu);

        SpeedButtonZeus = new QToolButton(frame_2);
        SpeedButtonZeus->setObjectName(QStringLiteral("SpeedButtonZeus"));
        SpeedButtonZeus->setMinimumSize(QSize(24, 24));
        SpeedButtonZeus->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/bmp/BRINGUP.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonZeus->setIcon(icon1);
        SpeedButtonZeus->setCheckable(true);
        SpeedButtonZeus->setAutoRaise(true);

        horizontalLayout_3->addWidget(SpeedButtonZeus);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        SpeedButtonDeskGrid = new QToolButton(frame_2);
        SpeedButtonDeskGrid->setObjectName(QStringLiteral("SpeedButtonDeskGrid"));
        SpeedButtonDeskGrid->setMinimumSize(QSize(24, 24));
        SpeedButtonDeskGrid->setMaximumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/bmp/CELLULES.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDeskGrid->setIcon(icon2);
        SpeedButtonDeskGrid->setCheckable(true);
        SpeedButtonDeskGrid->setChecked(false);
        SpeedButtonDeskGrid->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDeskGrid);

        SpeedButtonDesk1 = new QToolButton(frame_2);
        SpeedButtonDesk1->setObjectName(QStringLiteral("SpeedButtonDesk1"));
        SpeedButtonDesk1->setMinimumSize(QSize(24, 24));
        SpeedButtonDesk1->setMaximumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/bmp/tl.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDesk1->setIcon(icon3);
        SpeedButtonDesk1->setCheckable(true);
        SpeedButtonDesk1->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDesk1);

        SpeedButtonDesk2 = new QToolButton(frame_2);
        SpeedButtonDesk2->setObjectName(QStringLiteral("SpeedButtonDesk2"));
        SpeedButtonDesk2->setMinimumSize(QSize(24, 24));
        SpeedButtonDesk2->setMaximumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/bmp/tr.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDesk2->setIcon(icon4);
        SpeedButtonDesk2->setCheckable(true);
        SpeedButtonDesk2->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDesk2);

        SpeedButtonDesk3 = new QToolButton(frame_2);
        SpeedButtonDesk3->setObjectName(QStringLiteral("SpeedButtonDesk3"));
        SpeedButtonDesk3->setMinimumSize(QSize(24, 24));
        SpeedButtonDesk3->setMaximumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/bmp/bl.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDesk3->setIcon(icon5);
        SpeedButtonDesk3->setCheckable(true);
        SpeedButtonDesk3->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDesk3);

        SpeedButtonDesk4 = new QToolButton(frame_2);
        SpeedButtonDesk4->setObjectName(QStringLiteral("SpeedButtonDesk4"));
        SpeedButtonDesk4->setMinimumSize(QSize(24, 24));
        SpeedButtonDesk4->setMaximumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/bmp/br.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDesk4->setIcon(icon6);
        SpeedButtonDesk4->setCheckable(true);
        SpeedButtonDesk4->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDesk4);

        SpeedButtonDesk5 = new QToolButton(frame_2);
        SpeedButtonDesk5->setObjectName(QStringLiteral("SpeedButtonDesk5"));
        SpeedButtonDesk5->setMinimumSize(QSize(24, 24));
        SpeedButtonDesk5->setMaximumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/bmp/shared.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonDesk5->setIcon(icon7);
        SpeedButtonDesk5->setCheckable(true);
        SpeedButtonDesk5->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonDesk5);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy2);
        line_2->setMinimumSize(QSize(8, 0));
        line_2->setMaximumSize(QSize(5, 16777215));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        SpeedButtonLupa = new QToolButton(frame_2);
        SpeedButtonLupa->setObjectName(QStringLiteral("SpeedButtonLupa"));
        SpeedButtonLupa->setMinimumSize(QSize(48, 24));
        SpeedButtonLupa->setMaximumSize(QSize(48, 32));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        SpeedButtonLupa->setFont(font);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/bmp/TRISIZE.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonLupa->setIcon(icon8);
        SpeedButtonLupa->setCheckable(true);
        SpeedButtonLupa->setChecked(false);
        SpeedButtonLupa->setToolButtonStyle(Qt::ToolButtonTextOnly);
        SpeedButtonLupa->setAutoRaise(true);

        horizontalLayout->addWidget(SpeedButtonLupa);


        horizontalLayout_3->addLayout(horizontalLayout);

        SpeedButtonMinimize = new QToolButton(frame_2);
        SpeedButtonMinimize->setObjectName(QStringLiteral("SpeedButtonMinimize"));
        SpeedButtonMinimize->setMinimumSize(QSize(24, 24));
        SpeedButtonMinimize->setMaximumSize(QSize(32, 32));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/bmp/ZWIN.png"), QSize(), QIcon::Normal, QIcon::Off);
        SpeedButtonMinimize->setIcon(icon9);
        SpeedButtonMinimize->setAutoRaise(true);

        horizontalLayout_3->addWidget(SpeedButtonMinimize);


        gridLayout->addLayout(horizontalLayout_3, 0, 4, 1, 1);


        verticalLayout->addWidget(frame_2);


        retranslateUi(TMain_form);

        QMetaObject::connectSlotsByName(TMain_form);
    } // setupUi

    void retranslateUi(QDialog *TMain_form)
    {
        TMain_form->setWindowTitle(QApplication::translate("TMain_form", "Panel", 0));
        actionExit->setText(QApplication::translate("TMain_form", "Exit", 0));
        SpeedButtonMenu->setText(QApplication::translate("TMain_form", "P", 0));
        SpeedButtonZeus->setText(QApplication::translate("TMain_form", "Z", 0));
        SpeedButtonDeskGrid->setText(QApplication::translate("TMain_form", "D", 0));
        SpeedButtonDesk1->setText(QApplication::translate("TMain_form", "1", 0));
        SpeedButtonDesk2->setText(QApplication::translate("TMain_form", "2", 0));
        SpeedButtonDesk3->setText(QApplication::translate("TMain_form", "3", 0));
        SpeedButtonDesk4->setText(QApplication::translate("TMain_form", "4", 0));
        SpeedButtonDesk5->setText(QApplication::translate("TMain_form", "*", 0));
        SpeedButtonLupa->setText(QApplication::translate("TMain_form", "ZOOM", 0));
        SpeedButtonMinimize->setText(QApplication::translate("TMain_form", "M", 0));
    } // retranslateUi

};

namespace Ui {
    class TMain_form: public Ui_TMain_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
