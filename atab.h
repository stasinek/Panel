#ifndef ATAB_H
#define ATAB_H

#include <QDialog>

namespace Ui {
class TAtab_form;
}

class TAtab_form : public QDialog
{
    Q_OBJECT

public:
    explicit TAtab_form(QWidget *parent = 0);
    ~TAtab_form();

private:
    Ui::TAtab_form *ui;
};

#endif // ATAB_H
