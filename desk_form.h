#ifndef DESK_H
#define DESK_H

#include <QDialog>
#include <QSettings>
#include <QTimer>
#include "Windows.h"

namespace Ui {
class TDesk_form;
}

class TDesk_form : public QDialog {
  Q_OBJECT

public:
  explicit TDesk_form(QWidget *parent = 0);
  ~TDesk_form();
  HINSTANCE hInst;
  LONG updateing;
  QSettings *KluczRejestuSystemuWindows;
  struct {
    RECT rect;
    __int64 alpha, clickthrough, zoomed, visible, zorder, interval, sight, zoom,
        central;
    RECT clientrect, deskrect[5];
  } options;
  //---------------------------------------------------------------------------
  int __stdcall Desktop_Switch(int newdesk, bool redraw);
  //---------------------------------------------------------------------------
  void __stdcall tform_BeforeShow(void);
  void __stdcall tform_Resize(void);
  void __stdcall tform_Align(void);
  void __stdcall tform_Move(void);
  void __stdcall tform_Initialize(void);
  void __stdcall tform_Save(void);
  void __stdcall tform_Load(void);
  void __stdcall tform_Calculate_Rect(void);
  void __stdcall tform_Redraw(void);
  void __stdcall tform_Select(void);
  QTimer *Timer1;

private:
  Ui::TDesk_form *ui;
};

#endif // DESK_H
