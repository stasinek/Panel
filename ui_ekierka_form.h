/********************************************************************************
** Form generated from reading UI file 'ekierka_form.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EKIERKA_FORM_H
#define UI_EKIERKA_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ekierka_form
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_4;
    QSlider *horizontalSlider;
    QToolButton *toolButton_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QSlider *verticalSlider;
    QToolButton *toolButton;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Ekierka_form)
    {
        if (Ekierka_form->objectName().isEmpty())
            Ekierka_form->setObjectName(QStringLiteral("Ekierka_form"));
        Ekierka_form->setWindowModality(Qt::WindowModal);
        Ekierka_form->resize(501, 386);
        QPalette palette;
        QBrush brush(QColor(255, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        Ekierka_form->setPalette(palette);
        Ekierka_form->setContextMenuPolicy(Qt::NoContextMenu);
        Ekierka_form->setStyleSheet(QStringLiteral(""));
        Ekierka_form->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        Ekierka_form->setDockOptions(QMainWindow::AllowTabbedDocks);
        centralWidget = new QWidget(Ekierka_form);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(40, -1, 0, -1);
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setStyleSheet(QStringLiteral("background-color: rgb(192, 192,192);"));
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_5);

        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setStyleSheet(QStringLiteral("background-color: rgb(192, 192,192);"));
        toolButton_6->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_6);

        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setStyleSheet(QStringLiteral("background-color: rgb(192, 192,192);"));
        toolButton_7->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_7);

        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_3->sizePolicy().hasHeightForWidth());
        toolButton_3->setSizePolicy(sizePolicy);
        toolButton_3->setLayoutDirection(Qt::RightToLeft);
        toolButton_3->setStyleSheet(QStringLiteral("background-color: rgb(192, 192,192);"));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(toolButton_3);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 5);
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(25, 0));

        horizontalLayout_2->addWidget(toolButton_4);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        horizontalSlider->setPalette(palette1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        horizontalSlider->setFont(font);
        horizontalSlider->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"gridline-color: rgb(0, 0, 0);"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(380);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(2);

        horizontalLayout_2->addWidget(horizontalSlider);

        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));

        horizontalLayout_2->addWidget(toolButton_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 5, -1);
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
        verticalSlider->setPalette(palette2);
        verticalSlider->setFont(font);
        verticalSlider->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        verticalSlider->setMaximum(200);
        verticalSlider->setSingleStep(1);
        verticalSlider->setValue(180);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(true);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::TicksBelow);
        verticalSlider->setTickInterval(2);

        verticalLayout->addWidget(verticalSlider);

        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        verticalLayout->addWidget(toolButton);


        horizontalLayout_3->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QPalette palette3;
        QBrush brush1(QColor(255, 255, 255, 127));
        brush1.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        graphicsView->setPalette(palette3);
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 50%)"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(1);
        graphicsView->setRenderHints(QPainter::TextAntialiasing);
        graphicsView->setCacheMode(QGraphicsView::CacheBackground);
        graphicsView->setTransformationAnchor(QGraphicsView::NoAnchor);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        horizontalLayout_3->addWidget(graphicsView);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        Ekierka_form->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Ekierka_form);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 501, 18));
        Ekierka_form->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Ekierka_form);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Ekierka_form->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Ekierka_form);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Ekierka_form->setStatusBar(statusBar);

        retranslateUi(Ekierka_form);

        QMetaObject::connectSlotsByName(Ekierka_form);
    } // setupUi

    void retranslateUi(QMainWindow *Ekierka_form)
    {
        Ekierka_form->setWindowTitle(QApplication::translate("Ekierka_form", "tsoft>>Ekierka v1.0", 0));
        toolButton_5->setText(QApplication::translate("Ekierka_form", "...", 0));
        toolButton_6->setText(QApplication::translate("Ekierka_form", "...", 0));
        toolButton_7->setText(QApplication::translate("Ekierka_form", "...", 0));
        toolButton_3->setText(QApplication::translate("Ekierka_form", "...", 0));
        toolButton_4->setText(QApplication::translate("Ekierka_form", "*", 0));
        toolButton_2->setText(QApplication::translate("Ekierka_form", "+", 0));
        toolButton->setText(QApplication::translate("Ekierka_form", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class Ekierka_form: public Ui_Ekierka_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EKIERKA_FORM_H
