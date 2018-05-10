#ifndef EXPOSE_H
#define EXPOSE_H

#include <QDialog>

namespace Ui {
class TExpo_form;
}

class TExpo_form : public QDialog {
  Q_OBJECT

public:
  explicit TExpo_form(QWidget *parent = 0);
  ~TExpo_form();

private:
  Ui::TExpo_form *ui;
};

#endif // EXPOSE_H
