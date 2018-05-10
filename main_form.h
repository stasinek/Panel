#ifndef MAIN_FORM_H
#define MAIN_FORM_H

#include <QDialog>
#include <QSystemTrayIcon>
#include <QSettings>
#include <QTimer>
#include <QMouseEvent>
#include "Windows.h"
#include <QRect>
#include <QScreen>

namespace Ui {
class TMain_form;
}

class TMain_form : public QDialog {
  Q_OBJECT
protected:
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void mouseReleaseEvent(QMouseEvent *event);

private:
  QScreen *screen;
  QPoint last_mouse_pos;
  QRect screen_rect;
  bool move_it;

public:
  explicit TMain_form(QWidget *parent = 0);
  ~TMain_form();
  QSystemTrayIcon *trayIcon;
  QMenu *trayIconMenu;
  QIcon  mainWindowIcon;

private slots:
  void on_TMain_form_windowIconChanged(const QIcon &icon);
  void on_SpeedButtonDesk1_clicked(bool checked);
  void on_SpeedButtonDesk2_clicked(bool checked);
  void on_SpeedButtonDesk3_clicked(bool checked);
  void on_SpeedButtonDesk4_clicked(bool checked);
  void on_SpeedButtonDesk5_clicked(bool checked);
  void on_SpeedButtonDeskGrid_clicked(bool checked);
  void on_SpeedButtonLupa_clicked(bool checked);
  void on_SpeedButtonZeus_clicked(bool checked);
  void on_SpeedButtonMenu_clicked(bool checked);
  void on_SpeedButtonMinimize_clicked(bool checked);
  void on_SpeedButtonClose_clicked();
  void on_actionExit_triggered();

  void on_TMain_form_windowTitleChanged(const QString &title);

private:
  Ui::TMain_form *ui;
};
#endif // MAINWINDOW_H
