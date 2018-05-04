#include "wymiary_form.h"
#include "ui_wymiary_form.h"

Wymiary_form::Wymiary_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wymiary_form)
{
    ui->setupUi(this);
}

Wymiary_form::~Wymiary_form()
{
    delete ui;
}
