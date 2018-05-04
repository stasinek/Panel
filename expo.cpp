#include "main_form.h"
#include "expo.h"
#include "ui_expo.h"

TExpo_form::TExpo_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TExpo_form)
{
    ui->setupUi(this);
}

TExpo_form::~TExpo_form()
{
    delete ui;
}
