//---------------------------------------------------------------------------
#include "core.h"
#include "main_form.h"
#include "lupa_form.h"
#include "expo_form.h"
#include "desk_form.h"
#include "move_form.h"
#include "tips_form.h"
#include "size_form.h"
#include "zeus_form.h"
#include "atab_form.h"
//---------------------------------------------------------------------------
#include "ui_main_form.h"
//---------------------------------------------------------------------------

TMain_form::TMain_form(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::TMain_form)
{
	ui->setupUi(this);
	trayIcon = new QSystemTrayIcon(this);
	this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	move_it = false;
	this->setMouseTracking(false);
}
//---------------------------------------------------------------------------

TMain_form::~TMain_form()
{
	delete ui;
	delete trayIcon;
}
//---------------------------------------------------------------------------

void TMain_form::mousePressEvent(QMouseEvent *event)
{
	QWidget::mousePressEvent(event);
	if(event->button() == Qt::LeftButton) {
		move_it = true;
		last_mouse_pos = event->pos();
	}
}
//---------------------------------------------------------------------------

void TMain_form::mouseMoveEvent(QMouseEvent *event)
{
	QWidget::mouseMoveEvent(event);
	if(move_it) {
	   this->move(this->pos() + event->pos() - last_mouse_pos);
	}
}
//---------------------------------------------------------------------------

void TMain_form::mouseReleaseEvent(QMouseEvent *event)
{
	QWidget::mouseReleaseEvent(event);
	if(event->button() == Qt::LeftButton) {
		move_it = false;
	}
}
//---------------------------------------------------------------------------

void TMain_form::on_TMain_form_windowIconChanged(const QIcon &icon)
{
	trayIcon->setIcon(icon);
}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDesk1_clicked(bool checked)
{
    setWindowTitle("Desk: 1");
	ui->SpeedButtonDesk1->setChecked(true);
	ui->SpeedButtonDesk2->setChecked(0);
	ui->SpeedButtonDesk3->setChecked(0);
	ui->SpeedButtonDesk4->setChecked(0);
	ui->SpeedButtonDesk5->setChecked(0);
}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDesk2_clicked(bool checked)
{
    setWindowTitle("Desk: 2");
	ui->SpeedButtonDesk1->setChecked(0);
	ui->SpeedButtonDesk2->setChecked(true);
	ui->SpeedButtonDesk3->setChecked(0);
	ui->SpeedButtonDesk4->setChecked(0);
	ui->SpeedButtonDesk5->setChecked(0);

}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDesk3_clicked(bool checked)
{
    setWindowTitle("Desk: 3");
	ui->SpeedButtonDesk1->setChecked(0);
	ui->SpeedButtonDesk2->setChecked(0);
	ui->SpeedButtonDesk3->setChecked(true);
	ui->SpeedButtonDesk4->setChecked(0);
	ui->SpeedButtonDesk5->setChecked(0);

}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDesk4_clicked(bool checked)
{
    setWindowTitle("Desk: 4");
	ui->SpeedButtonDesk1->setChecked(0);
	ui->SpeedButtonDesk2->setChecked(0);
	ui->SpeedButtonDesk3->setChecked(0);
	ui->SpeedButtonDesk4->setChecked(true);
	ui->SpeedButtonDesk5->setChecked(0);

}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDesk5_clicked(bool checked)
{
    setWindowTitle("Desk: Shared");
	ui->SpeedButtonDesk1->setChecked(0);
	ui->SpeedButtonDesk2->setChecked(0);
	ui->SpeedButtonDesk3->setChecked(0);
	ui->SpeedButtonDesk4->setChecked(0);
	ui->SpeedButtonDesk5->setChecked(true);

}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonDeskGrid_clicked(bool checked)
{
	if (!checked) Desk_form->hide();
	else Desk_form->show();
	ui->SpeedButtonDeskGrid->setChecked(Desk_form->isVisible());
}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonLupa_clicked(bool checked)
{
	if (!checked) Lupa_form->hide();
	else Lupa_form->show();
	ui->SpeedButtonLupa->setChecked(Lupa_form->isVisible());
}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonZeus_clicked(bool checked)
{
	if (!checked) Zeus_form->hide();
	else Zeus_form->show();
	ui->SpeedButtonZeus->setChecked(Zeus_form->isVisible());
}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonMenu_clicked(bool checked)
{
        //showMenu()
    //show main menu
}

void TMain_form::on_SpeedButtonMinimize_clicked(bool checked)
{
	this->setWindowState(Qt::WindowMinimized);
}
//---------------------------------------------------------------------------

void TMain_form::on_actionExit_triggered()
{

}
//---------------------------------------------------------------------------

void TMain_form::on_SpeedButtonClose_clicked()
{
    this->close();
}
//---------------------------------------------------------------------------
