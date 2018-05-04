#ifndef RESIZER_MAIN_FORM_H
#define RESIZER_MAIN_FORM_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class Resizer_main_form;
}

class Resizer_main_form : public QMainWindow
{
    Q_OBJECT

public:
    explicit Resizer_main_form(QWidget *parent = 0);
    ~Resizer_main_form();

private slots:
    void on_toolButton_4_clicked();

    void on_toolButton_7_clicked();

private:
    Ui::Resizer_main_form *ui;
    QGraphicsScene *scene;
    QPen pen;
    QBrush brush;
};

#endif // RESIZER_MAIN_FORM_H
