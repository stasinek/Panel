//---------------------------------------------------------------------------
#include "core.h"
#include "wymiary_form.h"
//---------------------------------------------------------------------------
#include "ui_wymiary_form.h"
//---------------------------------------------------------------------------

Wymiary_form::Wymiary_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wymiary_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"wymiary_form");
}
//---------------------------------------------------------------------------

Wymiary_form::~Wymiary_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"wymiary_form");
    delete ui;
}
//---------------------------------------------------------------------------
