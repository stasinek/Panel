#ifndef TZOOM_FORM_H
#define TZOOM_FORM_H

#include <QDialog>

namespace Ui {
class TZoom_form;
}

class TZoom_form : public QDialog {
  Q_OBJECT

public:
  explicit TZoom_form(QWidget *parent = 0);
  ~TZoom_form();

private:
  Ui::TZoom_form *ui;
};

#endif // TZOOM_FORM_H
