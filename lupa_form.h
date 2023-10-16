#ifndef LUPA_H
#define LUPA_H

#include <QDialog>
#include <QSettings>
#include <QTimer>
#include "Windows.h"

namespace Ui {
class TLupa_form;
}

class TLupa_form : public QDialog {
  Q_OBJECT
protected:
  void showEvent(QResizeEvent *);

public:
  explicit TLupa_form(QWidget *parent = 0);
  ~TLupa_form();
  HINSTANCE hInst;
  LONG updateing;
  QSettings *KluczRejestuSystemuWindows;
  struct {
    __int64 sizeof_options;
    RECT rect;
    __int64 alpha, clickthrough, zoomed, visible, zorder, interval, sight, zoom,
        central;
    RECT clientrect;
  } options;
  void __stdcall tform_Initialize(void);
  void __stdcall tform_Redraw(void);
  void __stdcall tform_Resize(void);
  void __stdcall tform_Align(void);
  void __stdcall tform_Move(void);
  void __stdcall tform_Save(void);
  void __stdcall tform_Load(void);
  QTimer *Timer1;
private slots:
  void on_TLupa_form_resized();

private:
  Ui::TLupa_form *ui;
};

#endif // LUPA_H
