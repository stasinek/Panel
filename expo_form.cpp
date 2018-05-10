//---------------------------------------------------------------------------
#include "core.h"
#include "main_form.h"
#include "expo_form.h"
//---------------------------------------------------------------------------
#include "ui_expo.h"
//---------------------------------------------------------------------------

TExpo_form::TExpo_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TExpo_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"expo_form");
}
//---------------------------------------------------------------------------

TExpo_form::~TExpo_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"expo_form");
    delete ui;
}
//---------------------------------------------------------------------------
