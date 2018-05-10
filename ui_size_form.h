/********************************************************************************
** Form generated from reading UI file 'size_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIZE_FORM_H
#define UI_SIZE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TSize_form
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_2;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TSize_form)
    {
        if (TSize_form->objectName().isEmpty())
            TSize_form->setObjectName(QStringLiteral("TSize_form"));
        TSize_form->setWindowModality(Qt::ApplicationModal);
        TSize_form->resize(426, 175);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TSize_form->sizePolicy().hasHeightForWidth());
        TSize_form->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(TSize_form);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        groupBox = new QGroupBox(TSize_form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(12, 16, 385, 25));
        horizontalSlider->setMaximum(1024);
        horizontalSlider->setSingleStep(30);
        horizontalSlider->setPageStep(8);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);

        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(TSize_form);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(12, 19, 385, 25));
        horizontalSlider_2->setMaximum(1024);
        horizontalSlider_2->setSingleStep(30);
        horizontalSlider_2->setPageStep(8);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TicksBothSides);

        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBox = new QCheckBox(TSize_form);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout->addWidget(checkBox);

        buttonBox = new QDialogButtonBox(TSize_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TSize_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TSize_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TSize_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TSize_form);
    } // setupUi

    void retranslateUi(QDialog *TSize_form)
    {
        TSize_form->setWindowTitle(QApplication::translate("TSize_form", "Advanced: Size...", 0));
        groupBox->setTitle(QApplication::translate("TSize_form", "X; maximum 1024 pixels", 0));
        groupBox_2->setTitle(QApplication::translate("TSize_form", "Y; maximum 1024 pixels", 0));
        checkBox->setText(QApplication::translate("TSize_form", "Maintain selected X/Y proportions aspect", 0));
    } // retranslateUi

};

namespace Ui {
    class TSize_form: public Ui_TSize_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIZE_FORM_H
