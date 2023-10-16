#ifndef MOVE_form_H
#define MOVE_form_H

#include <QDialog>

namespace Ui {
class TMove_form;
}

class TMove_form : public QDialog {
  Q_OBJECT

public:
  explicit TMove_form(QWidget *parent = 0);
  ~TMove_form();
  void __stdcall tform_BeforeShow(void);

private:
  Ui::TMove_form *ui;
};

#endif // MOVE_form_H
