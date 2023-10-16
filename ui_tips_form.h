/********************************************************************************
** Form generated from reading UI file 'tips_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPS_FORM_H
#define UI_TIPS_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTips_form
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *TTips_form)
    {
        if (TTips_form->objectName().isEmpty())
            TTips_form->setObjectName(QStringLiteral("TTips_form"));
        TTips_form->resize(265, 66);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        TTips_form->setFont(font);
        horizontalLayout = new QHBoxLayout(TTips_form);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 8, 8, 8);
        widget = new QWidget(TTips_form);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(48, 48));

        horizontalLayout->addWidget(widget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, -1, -1);
        label = new QLabel(TTips_form);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        progressBar = new QProgressBar(TTips_form);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(0, 15));
        progressBar->setMaximumSize(QSize(16777215, 15));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(TTips_form);

        QMetaObject::connectSlotsByName(TTips_form);
    } // setupUi

    void retranslateUi(QDialog *TTips_form)
    {
        TTips_form->setWindowTitle(QApplication::translate("TTips_form", "Tips", 0));
        label->setText(QApplication::translate("TTips_form", "APP TIP: TEXT", 0));
    } // retranslateUi

};

namespace Ui {
    class TTips_form: public Ui_TTips_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPS_FORM_H
