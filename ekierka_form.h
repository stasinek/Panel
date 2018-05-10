#ifndef EKIERKA_FORM_H
#define EKIERKA_FORM_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>

namespace Ui {
class Ekierka_form;
}

class Ekierka_form : public QMainWindow {
  Q_OBJECT

public:
  explicit Ekierka_form(QWidget *parent = 0);
  ~Ekierka_form();

private slots:
  void on_toolButton_2_clicked(bool checked);
  void on_toolButton_clicked(bool checked);
  void on_toolButton_4_clicked(bool checked);

private:
  Ui::Ekierka_form *ui;
  QGraphicsScene *scene;
  QPen brush;          // creates a default brush
  QPen pen;            // creates a default pen
  QGraphicsItem *item; // creates a default item
};

#endif // EKIERKA_FORM_H
