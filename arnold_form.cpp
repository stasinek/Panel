#include "core.h"
#include "arnold_form.h"
#include "ui_arnoldwindow.h"

TArne_form::TArne_form(QWidget *parent) :
	QMainWindow(parent),
    ui(new Ui::TArne_form)
{
    ui->setupUi(this);
    //int w = QSystemTrayIcon::geometry()::width();
    //if (w == 0 || w == 1);
}

TArne_form::~TArne_form()
{
    delete ui;
}

void TArne_form::on_toolButton_6_clicked()
{
	this->ui->stackedWidget->setCurrentIndex(0);
}

void TArne_form::on_toolButton_5_clicked()
{
	this->ui->stackedWidget->setCurrentIndex(1);
}

void TArne_form::on_toolButton_4_clicked()
{

}

void TArne_form::on_toolButton_2_clicked()
{
	QStringList s,p;
	s << "http://dobreprogramy.pl";
    //QProcess browser(this); browser.start(s[0],p);
	QDesktopServices::openUrl(QUrl(s[0]));
}

void TArne_form::on_toolButton_clicked()
{
	this->close();
}

void TArne_form::on_toolButton_7_clicked()
{
	on_toolButton_clicked();
}
