#ifndef SIZE_H
#define SIZE_H

#include <QDialog>

namespace Ui {
class TSize_form;
}

class TSize_form : public QDialog {
  Q_OBJECT

public:
  explicit TSize_form(QWidget *parent = 0);
  ~TSize_form();

private:
  Ui::TSize_form *ui;
};

#endif // SIZE_H
