//---------------------------------------------------------------------------
#include "core.h"
#include "zoom_form.h"
//---------------------------------------------------------------------------
#include "ui_zoom.h"
//---------------------------------------------------------------------------

TZoom_form::TZoom_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TZoom_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"zoom_form");
}
//---------------------------------------------------------------------------

TZoom_form::~TZoom_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"zoom_form");
    delete ui;
}
//---------------------------------------------------------------------------
