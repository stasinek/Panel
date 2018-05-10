#ifndef ZEUS_H
#define ZEUS_H

#include <QDialog>

namespace Ui {
class TZeus_form;
}

class TZeus_form : public QDialog {
  Q_OBJECT

public:
  explicit TZeus_form(QWidget *parent = 0);
  ~TZeus_form();

private:
  Ui::TZeus_form *ui;
};

#endif // ZEUS_H
