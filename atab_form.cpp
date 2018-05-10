#include "core.h"
#include "atab_form.h"
#include "ui_atab.h"

TAtab_form::TAtab_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TAtab_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"atab_form");
}

TAtab_form::~TAtab_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"atab_form");
    delete ui;
}
