#ifndef ARNOLDWINDOW_H
#define ARNOLDWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDesktopServices>
#include <QUrl>
#include <QSystemTrayIcon>

namespace Ui {
class TArne_form;
}

class TArne_form : public QMainWindow {
  Q_OBJECT

public:
  explicit TArne_form(QWidget *parent = 0);
  ~TArne_form();

private slots:
  void on_toolButton_4_clicked();
  void on_toolButton_clicked();
  void on_toolButton_2_clicked();
  void on_toolButton_7_clicked();
  void on_toolButton_6_clicked();
  void on_toolButton_5_clicked();

private:
  Ui::TArne_form *ui;
};

#endif // MAINWINDOW_H
