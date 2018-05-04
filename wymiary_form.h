#ifndef WYMIARY_FORM_H
#define WYMIARY_FORM_H

#include <QDialog>

namespace Ui {
class Wymiary_form;
}

class Wymiary_form : public QDialog
{
    Q_OBJECT

public:
    explicit Wymiary_form(QWidget *parent = 0);
    ~Wymiary_form();

private:
    Ui::Wymiary_form *ui;
};

#endif // WYMIARY_FORM_H
