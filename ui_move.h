/********************************************************************************
** Form generated from reading UI file 'move.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVE_H
#define UI_MOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TMove_form
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QToolButton *Button5;
    QToolButton *Button4;
    QToolButton *Button1;
    QToolButton *Button2;
    QToolButton *Button3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *TMove_form)
    {
        if (TMove_form->objectName().isEmpty())
            TMove_form->setObjectName(QStringLiteral("TMove_form"));
        TMove_form->setWindowModality(Qt::ApplicationModal);
        TMove_form->resize(320, 170);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TMove_form->sizePolicy().hasHeightForWidth());
        TMove_form->setSizePolicy(sizePolicy);
        TMove_form->setMinimumSize(QSize(290, 170));
        verticalLayout = new QVBoxLayout(TMove_form);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        widget = new QWidget(TMove_form);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        Button5 = new QToolButton(widget);
        buttonGroup = new QButtonGroup(TMove_form);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(Button5);
        Button5->setObjectName(QStringLiteral("Button5"));
        Button5->setGeometry(QRect(55, 39, 50, 50));
        Button5->setMinimumSize(QSize(50, 50));
        Button4 = new QToolButton(widget);
        buttonGroup->addButton(Button4);
        Button4->setObjectName(QStringLiteral("Button4"));
        Button4->setGeometry(QRect(80, 64, 72, 56));
        Button4->setMouseTracking(false);
        Button1 = new QToolButton(widget);
        buttonGroup->addButton(Button1);
        Button1->setObjectName(QStringLiteral("Button1"));
        Button1->setGeometry(QRect(8, 8, 72, 56));
        Button2 = new QToolButton(widget);
        buttonGroup->addButton(Button2);
        Button2->setObjectName(QStringLiteral("Button2"));
        Button2->setGeometry(QRect(80, 8, 72, 56));
        Button3 = new QToolButton(widget);
        buttonGroup->addButton(Button3);
        Button3->setObjectName(QStringLiteral("Button3"));
        Button3->setGeometry(QRect(8, 64, 72, 56));
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(168, 8, 133, 113));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        Button3->raise();
        Button2->raise();
        Button4->raise();
        Button1->raise();
        Button5->raise();
        frame->raise();

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 5, -1, -1);
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        checkBox = new QCheckBox(TMove_form);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TMove_form);

        QMetaObject::connectSlotsByName(TMove_form);
    } // setupUi

    void retranslateUi(QDialog *TMove_form)
    {
        TMove_form->setWindowTitle(QApplication::translate("TMove_form", "Move window to desk:", 0));
        Button5->setText(QApplication::translate("TMove_form", "...", 0));
        Button4->setText(QApplication::translate("TMove_form", "4", 0));
        Button1->setText(QApplication::translate("TMove_form", "1", 0));
        Button2->setText(QApplication::translate("TMove_form", "2", 0));
        Button3->setText(QApplication::translate("TMove_form", "3", 0));
        checkBox->setText(QApplication::translate("TMove_form", "With all window parents", 0));
    } // retranslateUi

};

namespace Ui {
    class TMove_form: public Ui_TMove_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVE_H
