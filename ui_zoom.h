/********************************************************************************
** Form generated from reading UI file 'zoom.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZOOM_H
#define UI_ZOOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_TZoom_form
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QSlider *horizontalSlider;

    void setupUi(QDialog *TZoom_form)
    {
        if (TZoom_form->objectName().isEmpty())
            TZoom_form->setObjectName(QStringLiteral("TZoom_form"));
        TZoom_form->setWindowModality(Qt::ApplicationModal);
        TZoom_form->resize(400, 140);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TZoom_form->sizePolicy().hasHeightForWidth());
        TZoom_form->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(TZoom_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(44, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(TZoom_form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 365, 61));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(16, 23, 333, 21));
        horizontalSlider->setMaximum(8);
        horizontalSlider->setPageStep(2);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);

        retranslateUi(TZoom_form);
        QObject::connect(buttonBox, SIGNAL(accepted()), TZoom_form, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TZoom_form, SLOT(reject()));

        QMetaObject::connectSlotsByName(TZoom_form);
    } // setupUi

    void retranslateUi(QDialog *TZoom_form)
    {
        TZoom_form->setWindowTitle(QApplication::translate("TZoom_form", "Advanced: Zoom...", 0));
        groupBox->setTitle(QApplication::translate("TZoom_form", "2:1", 0));
    } // retranslateUi

};

namespace Ui {
    class TZoom_form: public Ui_TZoom_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZOOM_H
