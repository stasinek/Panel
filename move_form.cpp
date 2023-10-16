//---------------------------------------------------------------------------
#include "core.h"
#include "move_form.h"
//---------------------------------------------------------------------------
#include "ui_move.h"
//---------------------------------------------------------------------------

TMove_form::TMove_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TMove_form)
{
    ui->setupUi(this);
    readPositionSettings(Settings,static_cast<QWidget*>(this),"move_form");
}
//---------------------------------------------------------------------------

TMove_form::~TMove_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),"move_form");
    delete ui;
}
//---------------------------------------------------------------------------

void __stdcall TMove_form::tform_BeforeShow(void)
{
RECT clientrect;
::GetClientRect((HWND)this->winId(),&clientrect);
 ::SetWindowPos((HWND)this->winId(),HWND_TOPMOST,
                (Desktop->Screen->Rect.right-clientrect.right)/2,(Desktop->Screen->Rect.bottom-clientrect.bottom)/2,0,0,
                 SWP_NOSIZE|SWP_NOCOPYBITS|SWP_NOREDRAW|SWP_NOACTIVATE|SWP_NOSENDCHANGING);

if (Desktop->Active_Desktop_Index()==1) ui->Button1->setEnabled(false);
else ui->Button1->setEnabled(true);
if (Desktop->Active_Desktop_Index()==2) ui->Button2->setEnabled(false);
else ui->Button2->setEnabled(true);
if (Desktop->Active_Desktop_Index()==3) ui->Button3->setEnabled(false);
else ui->Button3->setEnabled(true);
if (Desktop->Active_Desktop_Index()==4) ui->Button4->setEnabled(false);
else ui->Button4->setEnabled(true);
if (Desktop->Active_Desktop_Index()==0) ui->Button5->setEnabled(false);
else ui->Button5->setEnabled(true);
}
//---------------------------------------------------------------------------
