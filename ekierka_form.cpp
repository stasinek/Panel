//---------------------------------------------------------------------------
#include "core.h"
#include "ekierka_form.h"
//---------------------------------------------------------------------------
#include "ui_ekierka_form.h"
//---------------------------------------------------------------------------

Ekierka_form::Ekierka_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ekierka_form)
{
    ui->setupUi(this);
    this->scene = new QGraphicsScene(0,0,ui->graphicsView->width(),ui->graphicsView->height(),ui->graphicsView);
    ui->graphicsView->setScene(scene);
    ui->horizontalSlider->setMaximum(ui->graphicsView->width());
    ui->verticalSlider->setMaximum(ui->graphicsView->height());
}
//---------------------------------------------------------------------------

Ekierka_form::~Ekierka_form()
{
    delete ui;
    delete scene;
}
//---------------------------------------------------------------------------

void Ekierka_form::on_toolButton_2_clicked(bool checked)
{
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(2);
    pen.setBrush(Qt::green);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    scene->addLine(ui->horizontalSlider->value(),0,ui->horizontalSlider->value(),ui->graphicsView->height(),pen);
    ui->graphicsView->show();
}
//---------------------------------------------------------------------------

void Ekierka_form::on_toolButton_clicked(bool checked)
{
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    pen.setBrush(Qt::green);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    scene->addLine(0,ui->verticalSlider->value(),ui->graphicsView->width(),ui->verticalSlider->value(),pen);
    ui->graphicsView->show();
}
//---------------------------------------------------------------------------

void Ekierka_form::on_toolButton_4_clicked(bool checked)
{
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1);
    pen.setBrush(Qt::green);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    scene->addLine(ui->horizontalSlider->value(),0,ui->horizontalSlider->value(),ui->graphicsView->height(),pen);
    scene->addLine(0,ui->verticalSlider->value(),ui->graphicsView->width(),ui->verticalSlider->value(),pen);
    ui->graphicsView->show();
}
//---------------------------------------------------------------------------
