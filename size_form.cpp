//---------------------------------------------------------------------------
#include "core.h"
#include "size_form.h"
//---------------------------------------------------------------------------
#include "ui_size.h"
//---------------------------------------------------------------------------

TSize_form::TSize_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TSize_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"size_form");
}
//---------------------------------------------------------------------------

TSize_form::~TSize_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"size_form");
    delete ui;
}
//---------------------------------------------------------------------------
