#ifndef RESIZER_ABOUT_FORM_H
#define RESIZER_ABOUT_FORM_H

#include <QDialog>

namespace Ui {
class Resizer_about_form;
}

class Resizer_about_form : public QDialog
{
    Q_OBJECT

public:
    explicit Resizer_about_form(QWidget *parent = 0);
    ~Resizer_about_form();

private:
    Ui::Resizer_about_form *ui;
};

#endif // RESIZER_ABOUT_FORM_H
