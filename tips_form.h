#ifndef TIPS_H
#define TIPS_H

#include <QDialog>

namespace Ui {
class TTips_form;
}

class TTips_form : public QDialog {
  Q_OBJECT

public:
  explicit TTips_form(QWidget *parent = 0);
  void Execute(QString caption, bool timeout, bool flash);
  ~TTips_form();

private slots:
  void on_Tips_finished(int result);

private:
  Ui::TTips_form *ui;
};

#endif // TIPS_H
