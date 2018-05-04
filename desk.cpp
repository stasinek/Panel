#include "core.h"
#include "desk.h"
#include "ui_desk.h"

TDesk_form::TDesk_form(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::TDesk_form)
{
	ui->setupUi(this);
	KluczRejestuSystemuWindows = new QSettings("HKEY_CURRENT_USER\\Software\\tsoft\\Panel\\Lupa", QSettings::NativeFormat);
}

TDesk_form::~TDesk_form()
{
	delete ui;
	delete KluczRejestuSystemuWindows;
}

//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_BeforeShow(void)
{
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Align(void)
{
::GetWindowRect(Desktop->Screen->Hwnd,&Desktop->Screen->Rect);
::GetWindowRect((HWND)this->winId(),&options.rect);

if (options.rect.left	 < Desktop->Screen->Rect.left)
   {options.rect.left   = Desktop->Screen->Rect.left;
   }
if (options.rect.right  >= Desktop->Screen->Rect.right)
   {options.rect.left   = Desktop->Screen->Rect.right  - (options.rect.right-options.rect.left);
   }
if (options.rect.top	 < Desktop->Screen->Rect.top)
   {options.rect.top    = Desktop->Screen->Rect.top;
   }
if (options.rect.bottom >= Desktop->Screen->Rect.bottom)
   {options.rect.top    = Desktop->Screen->Rect.bottom - (options.rect.bottom-options.rect.top);
   }
SetWindowPos((HWND)this->winId(),NULL,
		options.rect.left,options.rect.top,0,0,
		SWP_NOCOPYBITS|SWP_NOSIZE|SWP_NOACTIVATE|SWP_NOZORDER);
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Resize()
{
options.rect.right  = options.rect.left + options.clientrect.right;
options.rect.bottom = options.rect.top  + options.clientrect.bottom;
AdjustWindowRectEx(&options.rect,
		GetWindowLong((HWND)this->winId(),GWL_STYLE),false,
		GetWindowLong((HWND)this->winId(),GWL_EXSTYLE));
SetWindowPos((HWND)this->winId(),NULL,
		0,0,(options.rect.right-options.rect.left),(options.rect.bottom-options.rect.top),
		SWP_NOCOPYBITS|SWP_NOMOVE|SWP_NOACTIVATE|SWP_NOZORDER);
tform_Calculate_Rect(); tform_Align(); tform_Redraw();
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Move()
{
SetWindowPos((HWND)this->winId(),NULL,
		options.rect.left,options.rect.top,0,0,
		SWP_NOCOPYBITS|SWP_NOSIZE|SWP_NOACTIVATE|SWP_NOZORDER);
tform_Align();
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Redraw()
{
static bool lock = 0;
if (lock==1)
		return;
lock = 1;

static HBRUSH btnbrush = GetSysColorBrush(COLOR_BTNFACE);
static HBRUSH redbrush = CreateSolidBrush(RGB(255,115,115)), greenbrush = CreateSolidBrush(RGB(115,255,115)), bluebrush = CreateSolidBrush(RGB(115,115,255));
HBRUSH brush;

tform_Calculate_Rect();

SetStretchBltMode(Desktop->Screen->Context->Hdc,COLORONCOLOR);
Desktop->Screen->Context->Resize(options.clientrect.right,options.clientrect.bottom);
::FillRect(Desktop->Screen->Context->Hdc,&options.clientrect,btnbrush);
SetStretchBltMode(Desktop->Screen->Context->Hdc,HALFTONE);

for (int i = 1, x; i < 5; i++)
	{
	if (Desktop->Virtual[i]->Printed==true) x = i;
	else x = 0;
	StretchBlt(Desktop->Screen->Context->Hdc,
			 options.deskrect[i].left, options.deskrect[i].top, options.deskrect[i].right-options.deskrect[i].left, options.deskrect[i].bottom-options.deskrect[i].top,
			 Desktop->Virtual[x]->Context->Hdc,
			 0,0,Desktop->Virtual[x]->Rect.right,Desktop->Virtual[x]->Rect.bottom,
			 SRCCOPY);
	}
for (int color, d = Desktop->Previous_Desktop_Index();;)
	{
	 if (d==Desktop->Previous_Desktop_Index()) brush = bluebrush;
	 else brush = redbrush;

	 RECT temprect = options.deskrect[d];
	 temprect.left--;
	 temprect.top--;
	 temprect.right++;
	 temprect.bottom++;
	 ::FrameRect(Desktop->Screen->Context->Hdc,&temprect,brush);
	 temprect.left--;
	 temprect.top--;
	 temprect.right++;
	 temprect.bottom++;
	 ::FrameRect(Desktop->Screen->Context->Hdc,&temprect,brush);

	 if (d!=Desktop->Active_Desktop_Index()) d =Desktop->Active_Desktop_Index();
	 else break;
	}
tform_Select();

BitBlt(GetDC((HWND)this->winId()),
		 0,0,options.clientrect.right,options.clientrect.bottom,
		 Desktop->Screen->Context->Hdc,
		 0,0,
		 SRCCOPY);
lock = 0;
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Select()
{
POINT cursorpoint;
::GetCursorPos(&cursorpoint);
::ScreenToClient((HWND)this->winId(),&cursorpoint);
static int  curdesk = 0, d, olddesk;
static HWND curhwnd = NULL, oldhwnd;
static HBRUSH greenbrush = CreateSolidBrush(RGB(115,255,115));
HBRUSH brush;

for (d = 1; d <= 4; d++)
	{if (cursorpoint.x >= options.deskrect[d].left && cursorpoint.x < options.deskrect[d].right &&
	 cursorpoint.y >= options.deskrect[d].top  && cursorpoint.y < options.deskrect[d].bottom)
	{curdesk = d;
	 break;
	}
	}
if (curdesk!=0)
   {curhwnd = Desktop->Virtual[Desktop->Active_Desktop_Index()]->Handle_at_XY(
				(Desktop->Screen->Rect.right  * (cursorpoint.x-options.deskrect[curdesk].left)) / (options.deskrect[curdesk].right  - options.deskrect[curdesk].left),
				(Desktop->Screen->Rect.bottom * (cursorpoint.y-options.deskrect[curdesk].top))  / (options.deskrect[curdesk].bottom - options.deskrect[curdesk].top)
				);
   }
if (curdesk!=0 && curhwnd!=NULL)
   {
	 RECT temprect;
	 GetWindowRect(curhwnd,&temprect);

	 temprect.left = this->options.deskrect[curdesk].left + (temprect.left   * (this->options.deskrect[curdesk].right  - this->options.deskrect[curdesk].left)) / Desktop->Screen->Rect.right;
	 if (temprect.left < this->options.deskrect[curdesk].left)
		 temprect.left = this->options.deskrect[curdesk].left;
		 temprect.right = this->options.deskrect[curdesk].left + (temprect.right  * (this->options.deskrect[curdesk].right  - this->options.deskrect[curdesk].left)) / Desktop->Screen->Rect.right;
	 if (temprect.right > this->options.deskrect[curdesk].right)
		 temprect.right = this->options.deskrect[curdesk].right;
			 temprect.top = this->options.deskrect[curdesk].top  + (temprect.top    * (this->options.deskrect[curdesk].bottom - this->options.deskrect[curdesk].top))  / Desktop->Screen->Rect.bottom;
	 if (temprect.top < this->options.deskrect[curdesk].top)
		 temprect.top = this->options.deskrect[curdesk].top;
			 temprect.bottom = this->options.deskrect[curdesk].top  + (temprect.bottom * (this->options.deskrect[curdesk].bottom - this->options.deskrect[curdesk].top))  / Desktop->Screen->Rect.bottom;
	 if (temprect.bottom > this->options.deskrect[curdesk].bottom)
		 temprect.bottom = this->options.deskrect[curdesk].bottom;

	 InvertRect(Desktop->Screen->Context->Hdc,&this->options.deskrect[curdesk]);
	 InvertRect(Desktop->Screen->Context->Hdc,&temprect);

	  brush = greenbrush;

	 temprect.left--;
	 temprect.top--;
	 temprect.right++;
		 temprect.bottom++;
	 ::FrameRect(Desktop->Screen->Context->Hdc,&temprect,brush);
	 temprect.left--;
	 temprect.top--;
	 temprect.right++;
		 temprect.bottom++;
	  ::FrameRect(Desktop->Screen->Context->Hdc,&temprect,brush);

	 char text[64];
	 GetWindowTextA(curhwnd,text,63);
	 if (GetWindowTextLength(curhwnd)>0)
		{this->setWindowTitle("Okno: " + (QString)text);
		}
	 else
		{this->setWindowTitle("Okno: NULL");
		}
	 olddesk = curdesk; oldhwnd = curhwnd;
   }
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Calculate_Rect()
{
  options.deskrect[0].left = 4;
 options.deskrect[0].right = options.clientrect.right   - 4;
   options.deskrect[0].top = 4;
options.deskrect[0].bottom = options.clientrect.bottom  - 4;

  options.deskrect[1].left = 4;
 options.deskrect[1].right = options.deskrect[1].left   + (options.clientrect.right  - 12)/2;
   options.deskrect[1].top = 4;
options.deskrect[1].bottom = options.deskrect[1].top    + (options.clientrect.bottom - 12)/2;

  options.deskrect[2].left = options.deskrect[1].right  + 4;
 options.deskrect[2].right = options.deskrect[2].left   + (options.clientrect.right  - 12)/2;
   options.deskrect[2].top = options.deskrect[1].top;
options.deskrect[2].bottom = options.deskrect[1].bottom;

  options.deskrect[3].left = options.deskrect[1].left;
 options.deskrect[3].right = options.deskrect[1].right;
   options.deskrect[3].top = options.deskrect[1].bottom + 4;
options.deskrect[3].bottom = options.deskrect[3].top    + (options.clientrect.bottom - 12)/2;

  options.deskrect[4].left = options.deskrect[2].left;
 options.deskrect[4].right = options.deskrect[2].right;
   options.deskrect[4].top = options.deskrect[3].top;
options.deskrect[4].bottom = options.deskrect[3].bottom;
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Initialize(void)
{
tform_Load();
Timer1->setInterval(options.interval);
//MenuItemTop->Checked = (options.zorder==(long)HWND_TOPMOST);
Desktop->Action(SET_TRANSPARENCY,(HWND)this->winId(),options.alpha,options.clickthrough);
tform_Move(); tform_Resize();
SetClassLong((HWND)this->winId(),GCL_STYLE,GetClassLong((HWND)this->winId(),GCL_STYLE) | CS_SAVEBITS);
if (options.zoomed)
	SetWindowLong((HWND)this->winId(),GWL_STYLE,GetWindowLong((HWND)this->winId(),GWL_STYLE) | WS_MAXIMIZE);
if (options.visible)
	this->show();
}
//---------------------------------------------------------------------------

void __fastcall TDesk_form::tform_Load(void)
{
KluczRejestuSystemuWindows->sync();

if (KluczRejestuSystemuWindows->childGroups().contains("clientrect",Qt::CaseInsensitive))
	{options.clientrect.right  = KluczRejestuSystemuWindows->value("clientrect.right").toInt();
	 options.clientrect.bottom = KluczRejestuSystemuWindows->value("clientrect.bottom").toInt();
	}
else
{options.clientrect.right = 2*96+12;
 options.clientrect.bottom = 2*72+12;
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
	{options.zorder = (long)HWND_TOPMOST;
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

void __fastcall TDesk_form::tform_Save(void)
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
