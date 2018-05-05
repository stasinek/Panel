#include "core.h"
#include "atab_form.h"
#include "ui_atab.h"

TAtab_form::TAtab_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TAtab_form)
{
    ui->setupUi(this);
}

TAtab_form::~TAtab_form()
{
    delete ui;
}
