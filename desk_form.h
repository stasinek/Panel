#ifndef DESK_H
#define DESK_H

#include <QDialog>
#include <QSettings>
#include <QTimer>
#include "Windows.h"


namespace Ui {
class TDesk_form;
}

class TDesk_form : public QDialog
{
    Q_OBJECT

public:
    explicit TDesk_form(QWidget *parent = 0);
    ~TDesk_form();
    //---------------------------------------------------------------------------
    QTimer *Timer1;
    //---------------------------------------------------------------------------
    HINSTANCE hInst; LONG updateing;
    //---------------------------------------------------------------------------
    struct {
    RECT rect;
    int alpha,clickthrough,zoomed,visible,zorder,interval,sight,zoom,central;
    RECT clientrect, deskrect[5];
    } options;
    QSettings *KluczRejestuSystemuWindows;
    //---------------------------------------------------------------------------
    int   __fastcall Desktop_Switch        (int newDesk, bool redraw);
    //---------------------------------------------------------------------------
    void  __fastcall tform_BeforeShow      (void);
    void  __fastcall tform_Resize          (void);
    void  __fastcall tform_Align           (void);
    void  __fastcall tform_Move            (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Initialize      (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Save            (void);
    void  __fastcall tform_Load            (void);
    //---------------------------------------------------------------------------
    void  __fastcall tform_Calculate_Rect  (void);
    void  __fastcall tform_Redraw          (void);
    void  __fastcall tform_Select          (void);
    //---------------------------------------------------------------------------
private:
    Ui::TDesk_form *ui;
};

#endif // DESK_H
