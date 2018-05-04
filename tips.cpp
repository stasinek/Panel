#include "core.h"
#include "tips.h"
#include "ui_tips.h"

TTips_form::TTips_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TTips_form)
{
    ui->setupUi(this);
}

TTips_form::~TTips_form()
{
    delete ui;
}

void TTips_form::on_Tips_finished(int result)
{

}

void TTips_form::Execute(QString caption, bool timeout, bool flash)
{
register HWND hwnd = GetForegroundWindow();
register HWND thishwnd = (HWND)this->winId();
register int p;

this->setWindowTitle(caption);
this->repaint();

POINT cursorpoint;
GetCursorPos(&cursorpoint);
RECT clientrect;
::GetClientRect(thishwnd,&clientrect);
 ::SetWindowPos(thishwnd,HWND_TOPMOST,
                (Desktop->Screen->Rect.right-clientrect.right)/2,(Desktop->Screen->Rect.bottom-clientrect.bottom)/2,0,0,
                 SWP_NOSIZE|SWP_NOCOPYBITS|SWP_NOREDRAW|SWP_NOACTIVATE|SWP_NOSENDCHANGING);
ShowWindow(thishwnd,SW_SHOW);

 if (timeout)
for (p = 1; p <= 5; p++) { Application->processEvents();
      if (flash==true) {
      FlashWindow(hwnd, (p & 0x01));
      Sleep(200);
      FlashWindow(hwnd,!(p & 0x01));
      Sleep(200);
      }
      else Sleep(400);
    }
if (timeout) ShowWindow(thishwnd,SW_HIDE);
SetForegroundWindow(hwnd);
}
//---------------------------------------------------------------------------
