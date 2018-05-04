/********************************************************************************
** Form generated from reading UI file 'expo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPO_H
#define UI_EXPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TExpo_form
{
public:
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_4;
    QWidget *page_3;
    QWidget *page_2;
    QWidget *page_5;

    void setupUi(QDialog *TExpo_form)
    {
        if (TExpo_form->objectName().isEmpty())
            TExpo_form->setObjectName(QStringLiteral("TExpo_form"));
        TExpo_form->resize(522, 300);
        horizontalLayout = new QHBoxLayout(TExpo_form);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(TExpo_form);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(graphicsView);

        toolBox = new QToolBox(TExpo_form);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setFrameShape(QFrame::Box);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 55, 181));
        toolBox->addItem(page, QStringLiteral("1"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        toolBox->addItem(page_4, QStringLiteral("2"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 55, 181));
        toolBox->addItem(page_3, QStringLiteral("3"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 55, 154));
        toolBox->addItem(page_2, QStringLiteral("4"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        toolBox->addItem(page_5, QStringLiteral("*"));

        horizontalLayout->addWidget(toolBox);


        retranslateUi(TExpo_form);

        toolBox->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(TExpo_form);
    } // setupUi

    void retranslateUi(QDialog *TExpo_form)
    {
        TExpo_form->setWindowTitle(QApplication::translate("TExpo_form", "Expo", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("TExpo_form", "1", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("TExpo_form", "2", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("TExpo_form", "3", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("TExpo_form", "4", 0));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("TExpo_form", "*", 0));
    } // retranslateUi

};

namespace Ui {
    class TExpo_form: public Ui_TExpo_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPO_H
