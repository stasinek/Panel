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
    QDialog(parent),screen(QApplication::screens().at(0)),
    ui(new Ui::TMain_form)
{
    ui->setupUi(this);
    trayIcon = new QSystemTrayIcon(this);
    this->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    move_it = false;
    this->setMouseTracking(false);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"main_form");
}
//---------------------------------------------------------------------------

TMain_form::~TMain_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"main_form");
    Settings->sync();
    delete ui;
    delete trayIcon;
}
//---------------------------------------------------------------------------

void TMain_form::mousePressEvent(QMouseEvent *event)
{
    screen_rect = screen->availableGeometry();
    QWidget::mousePressEvent(event);
    if(event->button() == Qt::LeftButton) {
        move_it = true;
        last_mouse_pos = event->pos();
    }
}
//---------------------------------------------------------------------------

void TMain_form::mouseMoveEvent(QMouseEvent *event)
{
#define PIXELS_OUT 0
#define PIXELS_SNAP 10

    QRect rect_limiting_mouse; QPoint snap_point(PIXELS_SNAP,PIXELS_SNAP),out_point(PIXELS_OUT,PIXELS_OUT);
    QPoint distance, destination_point;
    QWidget::mouseMoveEvent(event);
    if(move_it) {
       distance = this->pos() + event->pos() - last_mouse_pos;
       rect_limiting_mouse.setTopLeft(screen_rect.topLeft()-out_point);
       rect_limiting_mouse.setBottomRight(screen_rect.bottomRight()-this->rect().bottomRight()+out_point);
       destination_point = this->rect().topLeft() + distance;
//     if (rect_limiting_mouse.contains(destination_point))
       if (rect_limiting_mouse.left() + snap_point.x() > destination_point.x()) destination_point.setX(rect_limiting_mouse.left());
       else if (rect_limiting_mouse.right() - snap_point.x() < destination_point.x()) destination_point.setX(rect_limiting_mouse.right());
       if (rect_limiting_mouse.top() + snap_point.y() > destination_point.y()) destination_point.setY(rect_limiting_mouse.top());
       else if (rect_limiting_mouse.bottom() - snap_point.y() < destination_point.y()) destination_point.setY(rect_limiting_mouse.bottom());

       distance = destination_point - this->rect().topLeft();
       this->move(distance);
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
