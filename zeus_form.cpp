//---------------------------------------------------------------------------
#include "core.h"
#include "zeus_form.h"
//---------------------------------------------------------------------------
#include "ui_zeus.h"
//---------------------------------------------------------------------------

TZeus_form::TZeus_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TZeus_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"zeus_form");
}
//---------------------------------------------------------------------------

TZeus_form::~TZeus_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"zeus_form");
    delete ui;
}
//---------------------------------------------------------------------------
