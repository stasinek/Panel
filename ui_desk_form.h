/********************************************************************************
** Form generated from reading UI file 'desk_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESK_FORM_H
#define UI_DESK_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_TDesk_form
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *TDesk_form)
    {
        if (TDesk_form->objectName().isEmpty())
            TDesk_form->setObjectName(QStringLiteral("TDesk_form"));
        TDesk_form->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TDesk_form->sizePolicy().hasHeightForWidth());
        TDesk_form->setSizePolicy(sizePolicy);
        TDesk_form->setMinimumSize(QSize(320, 240));
        gridLayout = new QGridLayout(TDesk_form);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        graphicsView = new QGraphicsView(TDesk_form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);


        retranslateUi(TDesk_form);

        QMetaObject::connectSlotsByName(TDesk_form);
    } // setupUi

    void retranslateUi(QDialog *TDesk_form)
    {
        TDesk_form->setWindowTitle(QApplication::translate("TDesk_form", "Desk", 0));
    } // retranslateUi

};

namespace Ui {
    class TDesk_form: public Ui_TDesk_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESK_FORM_H
