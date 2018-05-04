#include "resizer_about_form.h"
#include "ui_resizer_about_form.h"

Resizer_about_form::Resizer_about_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resizer_about_form)
{
    ui->setupUi(this);
}

Resizer_about_form::~Resizer_about_form()
{
    delete ui;
}
