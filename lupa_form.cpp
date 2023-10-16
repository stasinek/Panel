//---------------------------------------------------------------------------
#include "core.h"
#include "lupa_form.h"
#include "zeus_form.h"
#include "zoom_form.h"
//---------------------------------------------------------------------------
#include "ui_lupa.h"
//---------------------------------------------------------------------------

TLupa_form::TLupa_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TLupa_form)
{
    ui->setupUi(this);
    updateing = 0;
    hInst = (HINSTANCE)::GetModuleHandle(NULL);
    ::SetStretchBltMode(::GetDC((HWND)this->winId()),STRETCH_DELETESCANS);
    Timer1 = new QTimer(this);
    KluczRejestuSystemuWindows = new QSettings("HKEY_CURRENT_USER\\Software\\tsoft\\Panel\\Desk", QSettings::NativeFormat);
    readPositionSettings(Settings,static_cast<QWidget*>(this),(char*)"lupa_form");
}
//---------------------------------------------------------------------------

TLupa_form::~TLupa_form()
{
    writePositionSettings(Settings,static_cast<QWidget*>(this),(char*)"lupa_form");
    delete KluczRejestuSystemuWindows;
    delete Timer1;
    delete ui;
}
//---------------------------------------------------------------------------

void TLupa_form::showEvent(QResizeEvent *) {
::GetWindowRect(Desktop->Screen->Hwnd,&Desktop->Screen->Rect);
}
//---------------------------------------------------------------------------


void __stdcall TLupa_form::tform_Redraw(void)
{
static bool lock = 0;
if (lock==1)
{       return;
        }
lock = 1;

::GetClientRect((HWND)this->winId(),&options.clientrect);
POINT halfsize, fullsize;
fullsize.x = (options.clientrect.right-4)/options.zoom; fullsize.y = (options.clientrect.bottom-4)/options.zoom;
halfsize.x =  fullsize.x/2; halfsize.y = fullsize.y/2;
options.central = options.clickthrough >0;

static CURSORINFO oldcursorinfo, curcursorinfo;
curcursorinfo.cbSize = sizeof(CURSORINFO);
GetCursorInfo(&curcursorinfo);
static POINT oldformpoint, newformpoint;

static HBRUSH backgroundbrush = GetSysColorBrush(COLOR_BACKGROUND);
static HBRUSH crossbrush = GetSysColorBrush(COLOR_BTNFACE);
Desktop->Screen->Context->Resize(options.clientrect.right,options.clientrect.bottom);
// zamalowanie poza ekranem X
//
RECT grabrect, destrect, fillrect;
     destrect.left  = 0;
     fillrect.left  = 0; fillrect.right  = 0;
     fillrect.top   = 0; fillrect.bottom = fullsize.y;
     grabrect.left  = curcursorinfo.ptScreenPos.x - halfsize.x;
     grabrect.right = grabrect.left + fullsize.x;
 if (curcursorinfo.ptScreenPos.x < halfsize.x)
    {destrect.left = halfsize.x - curcursorinfo.ptScreenPos.x;
     fillrect.right = destrect.left;
     grabrect.left = 0;
    }
 else
 if (curcursorinfo.ptScreenPos.x + halfsize.x >= Desktop->Screen->Rect.right)
    {grabrect.right = Desktop->Screen->Rect.right;
     fillrect.left = grabrect.right-grabrect.left; fillrect.right = fullsize.x;
    }
 if (fillrect.right - fillrect.left!=0)
    {::FillRect(Desktop->Screen->Context->Hdc,&fillrect,backgroundbrush);
    }
// zamalowanie poza ekranem Y
//
     destrect.top    = 0;
     fillrect.top    = 0; fillrect.bottom = 0;
     fillrect.left   = 0; fillrect.right  = fullsize.x;
     grabrect.top    = curcursorinfo.ptScreenPos.y - halfsize.y;
     grabrect.bottom = grabrect.top + fullsize.y;
 if (curcursorinfo.ptScreenPos.y < halfsize.y)
    {destrect.top = halfsize.y - curcursorinfo.ptScreenPos.y;
     fillrect.bottom = destrect.top;
     grabrect.top = 0;
    }
 else
 if (curcursorinfo.ptScreenPos.y + halfsize.y >= Desktop->Screen->Rect.bottom)
    {grabrect.bottom = Desktop->Screen->Rect.bottom;
     fillrect.top = grabrect.bottom-grabrect.top; fillrect.bottom = fullsize.y;
    }
 if (fillrect.top - fillrect.bottom!=0)
    {FillRect(Desktop->Screen->Context->Hdc,&fillrect,backgroundbrush);
    }
// zrzut ekranu
//
::BitBlt(Desktop->Screen->Context->Hdc,
        destrect.left,destrect.top,grabrect.right-grabrect.left,grabrect.bottom-grabrect.top,
        Desktop->Screen->Hdc,
        grabrect.left,grabrect.top,
        SRCCOPY);
//options.sight
//
if (options.sight==true && curcursorinfo.flags!=0)
   {
    ::MoveToEx(Desktop->Screen->Context->Hdc,halfsize.x - 4,halfsize.y,NULL);
      ::LineTo(Desktop->Screen->Context->Hdc,halfsize.x + 5,halfsize.y);
    ::MoveToEx(Desktop->Screen->Context->Hdc,halfsize.x,halfsize.y - 4,NULL);
      ::LineTo(Desktop->Screen->Context->Hdc,halfsize.x,halfsize.y + 5);
   }
// ustawienie pozycji okna i/lub umieszczenie TOPMOST
//
/* if (options.follow==true && options.zoomed==false)
if (oldcursorinfo.ptScreenPos.x!=curcursorinfo.ptScreenPos.x || oldcursorinfo.ptScreenPos.y!=curcursorinfo.ptScreenPos.y)
   {
    if (options.central==true) {
        newformpoint.x = curcursorinfo.ptScreenPos.x - options.clientrect.right/2;
    if (newformpoint.x > Desktop->Screen->Rect.right - options.clientrect.right)
       {newformpoint.x = Desktop->Screen->Rect.right - options.clientrect.right;
        goto NEXT;
       }
        newformpoint.y = curcursorinfo.ptScreenPos.y - options.clientrect.bottom/2;
    if (newformpoint.y > Desktop->Screen->Rect.bottom - options.clientrect.bottom)
       {newformpoint.y = Desktop->Screen->Rect.bottom - options.clientrect.bottom;
        goto NEXT;
       }
    }
    else {
        newformpoint.x = curcursorinfo.ptScreenPos.x + (options.clientrect.right)/2;
    if (newformpoint.x > Desktop->Screen->Rect.right - options.clientrect.right)
       {newformpoint.x = Desktop->Screen->Rect.right - options.clientrect.right;
        if (Desktop->Screen->Rect.right - curcursorinfo.ptScreenPos.x >= Desktop->Screen->Rect.bottom - curcursorinfo.ptScreenPos.y)
           {newformpoint.y = curcursorinfo.ptScreenPos.y - (options.clientrect.bottom)/2 - options.clientrect.bottom;
            goto NEXT;
           }
       }
        newformpoint.y = curcursorinfo.ptScreenPos.y + (options.clientrect.bottom-options.clientrect.top)/2;
    if (newformpoint.y > Desktop->Screen->Rect.bottom - options.clientrect.bottom)
       {newformpoint.y = Desktop->Screen->Rect.bottom - options.clientrect.bottom;
        if (Desktop->Screen->Rect.right - curcursorinfo.ptScreenPos.x <= Desktop->Screen->Rect.bottom - curcursorinfo.ptScreenPos.y)
           {newformpoint.x = curcursorinfo.ptScreenPos.x - (options.clientrect.right)/2 - options.clientrect.right;
            goto NEXT;
           }
       }
    }
     NEXT:
     SetWindowPos((HWND)this->winId(),
             (void*)options.zorder,
             newformpoint.x,newformpoint.y,
             0,0,
             SWP_NOCOPYBITS|SWP_NOACTIVATE|SWP_NOSIZE);

     oldcursorinfo.ptScreenPos = curcursorinfo.ptScreenPos;
    }
*/
    if(!Zeus_form->isVisible() && !Zoom_form->isVisible() && !Size_form->isVisible() && !Atab_form->isVisible() && !Tips_form->isVisible())
        {SetWindowPos((HWND)this->winId(),
             (HWND)options.zorder,
             0,0,
             0,0,
        SWP_NOREDRAW|SWP_NOACTIVATE|SWP_NOSIZE|SWP_NOMOVE);
        }
RECT framerect = options.clientrect;
::FrameRect(GetDC((HWND)this->winId()),&framerect,crossbrush);
     framerect.left++;
     framerect.top++;
     framerect.right--;
     framerect.bottom--;
::FrameRect(GetDC((HWND)this->winId()),&framerect,crossbrush);

StretchBlt(GetDC((HWND)this->winId()),
      2,2,options.clientrect.right-4,options.clientrect.bottom-4,
      Desktop->Screen->Context->Hdc,
      0,0,fullsize.x,fullsize.y,
      SRCCOPY);

lock = 0;
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Align(void)
{
::GetWindowRect(Desktop->Screen->Hwnd,&Desktop->Screen->Rect);
::GetWindowRect((HWND)this->winId(),&options.rect);

if (options.rect.left	 < Desktop->Screen->Rect.left)
   {options.rect.left    = Desktop->Screen->Rect.left;
   }
if (options.rect.right  >= Desktop->Screen->Rect.right)
   {options.rect.left    = Desktop->Screen->Rect.right  - (options.rect.right-options.rect.left);
   }
if (options.rect.top	 < Desktop->Screen->Rect.top)
   {options.rect.top     = Desktop->Screen->Rect.top;
   }
if (options.rect.bottom >= Desktop->Screen->Rect.bottom)
   {options.rect.top     = Desktop->Screen->Rect.bottom - (options.rect.bottom-options.rect.top);
   }

SetWindowPos((HWND)this->winId(),NULL,
        options.rect.left,options.rect.top,0,0,
        SWP_NOCOPYBITS|SWP_NOSIZE|SWP_NOACTIVATE|SWP_NOZORDER);
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Move()
{
SetWindowPos((HWND)this->winId(),NULL,
        options.rect.left,options.rect.top,0,0,
        SWP_NOCOPYBITS|SWP_NOSIZE|SWP_NOACTIVATE|SWP_NOZORDER);
tform_Align();
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Resize(void)
{
options.rect.right  = options.rect.left + options.clientrect.right;
options.rect.bottom = options.rect.top  + options.clientrect.bottom;

AdjustWindowRectEx(&options.rect,
        GetWindowLong((HWND)this->winId(),GWL_STYLE),false,
        GetWindowLong((HWND)this->winId(),GWL_EXSTYLE));
SetWindowPos((HWND)this->winId(),NULL,
        0,0,(options.rect.right-options.rect.left),(options.rect.bottom-options.rect.top),
        SWP_NOCOPYBITS|SWP_NOMOVE|SWP_NOACTIVATE|SWP_NOZORDER);
tform_Align();
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Initialize(void)
{
tform_Load();
Timer1->setInterval(options.interval);
Desktop->Action(SET_TRANSPARENCY,(HWND)this->winId(),options.alpha,options.clickthrough);
tform_Move(); tform_Resize();
if (options.zoomed)
     SetWindowLong((HWND)this->winId(),GWL_STYLE,GetWindowLong((HWND)this->winId(),GWL_STYLE) | WS_MAXIMIZE);
if (options.visible)
     this->show();
SetClassLong((HWND)this->winId(),GCL_STYLE,GetClassLong((HWND)this->winId(),GCL_STYLE) | CS_SAVEBITS);
//MenuItemCelownik->Checked = options.sight;
//SubMenuZoomClick(this);
//SubMenuPrzeswitClick(this);
//SubMenuSizeClick(this);
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Load(void)
{
KluczRejestuSystemuWindows->sync();

if (KluczRejestuSystemuWindows->childGroups().contains("clientrect",Qt::CaseInsensitive))
    {options.clientrect.right  = KluczRejestuSystemuWindows->value("clientrect.right").toInt();
     options.clientrect.bottom = KluczRejestuSystemuWindows->value("clientrect.bottom").toInt();
    }
else
    {options.clientrect.right  = 320;
     options.clientrect.bottom = 240;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("rect",Qt::CaseInsensitive))
    {options.rect.left = KluczRejestuSystemuWindows->value("rect.left").toInt();
     options.rect.top  = KluczRejestuSystemuWindows->value("rect.top").toInt();
    }
else
    {options.rect.left = 0;
     options.rect.top = 0;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("zoomed",Qt::CaseInsensitive))
    {options.zoomed = KluczRejestuSystemuWindows->value("zoomed").toBool();
    }
else
    {options.zoomed = false;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("alpha",Qt::CaseInsensitive))
    {options.alpha = KluczRejestuSystemuWindows->value("alpha").toInt();
    }
else
    {options.alpha = -1;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("clickthrough",Qt::CaseInsensitive))
    {options.clickthrough  = KluczRejestuSystemuWindows->value("clickthrough").toBool();
    }
else
    {options.clickthrough  = 0;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("visible",Qt::CaseInsensitive))
    {options.visible = KluczRejestuSystemuWindows->value("visible").toInt();
    }
else
    {options.visible = false;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("interval",Qt::CaseInsensitive))
    {options.interval = KluczRejestuSystemuWindows->value("interval").toInt();
    }
else
    {options.interval = 44;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("zorder",Qt::CaseInsensitive))
    {options.zorder = KluczRejestuSystemuWindows->value("zorder").toBool();
    }
else
    {options.zorder = (__int64)HWND_TOPMOST;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("sight",Qt::CaseInsensitive))
    {options.sight = KluczRejestuSystemuWindows->value("sight").toBool();
    }
else
    {options.sight = false;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("zoom",Qt::CaseInsensitive))
    {options.zoom = KluczRejestuSystemuWindows->value("zoom").toInt();
    }
else
    {options.zoom = 3;
    }
if (KluczRejestuSystemuWindows->childGroups().contains("central",Qt::CaseInsensitive))
    {options.central = KluczRejestuSystemuWindows->value("central").toBool();
    }
else
    {options.central = false;
    }
}
//---------------------------------------------------------------------------

void __stdcall TLupa_form::tform_Save(void)
{
if (!options.zoomed)
   {::GetClientRect((HWND)this->winId(),&options.clientrect);
    ::GetWindowRect((HWND)this->winId(),&options.rect);
   }
KluczRejestuSystemuWindows->setValue("rect.left",(int)options.rect.left);
KluczRejestuSystemuWindows->setValue("rect.top",(int)options.rect.top);
KluczRejestuSystemuWindows->setValue("clientrect.right",(int)options.clientrect.right);
KluczRejestuSystemuWindows->setValue("clientrect.bottom",(int)options.clientrect.bottom);
KluczRejestuSystemuWindows->setValue("zoomed",(int)options.zoomed);
KluczRejestuSystemuWindows->setValue("alpha",options.alpha);
KluczRejestuSystemuWindows->setValue("clickthrough",options.clickthrough);
KluczRejestuSystemuWindows->setValue("visible",options.visible);
KluczRejestuSystemuWindows->setValue("interval", options.interval);
KluczRejestuSystemuWindows->setValue("zorder",options.zorder);
KluczRejestuSystemuWindows->setValue("sight",options.sight);
KluczRejestuSystemuWindows->setValue("zoom",options.zoom);
KluczRejestuSystemuWindows->setValue("central",options.central);
KluczRejestuSystemuWindows->sync();
}
//---------------------------------------------------------------------------

void TLupa_form::on_TLupa_form_resized()
{
::GetClientRect((HWND)this->winId(),&options.clientrect);
::GetWindowRect((HWND)this->winId(),&options.rect);
options.zoomed = IsZoomed((HWND)this->winId());
}
