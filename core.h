//---------------------------------------------------------------------------
#ifndef __Core_HDR__
#define __Core_HDR__
//---------------------------------------------------------------------------
#include <QtWidgets/QApplication>
#include <QSettings>
//---------------------------------------------------------------------------
#include "windows.h"
#include "wingdi.h"
#include "winuser.h"
//---------------------------------------------------------------------------
#include "..\..\..\x86_win32_classes\tsoft_WindowsMover.h"
#include "..\..\..\x86_win32_classes\tsoft_WindowsCollector.h"
//---------------------------------------------------------------------------
#include "arnold_form.h"
#include "lupa_form.h"
#include "ekierka_form.h"
#include "expo_form.h"
#include "atab_form.h"
#include "desk_form.h"
#include "main_form.h"
#include "move_form.h"
#include "size_form.h"
#include "tips_form.h"
#include "wymiary_form.h"
#include "zoom_form.h"
#include "zeus_form.h"
//---------------------------------------------------------------------------
extern QApplication *Application;
extern QSettings *Settings;
void __stdcall writePositionSettings(QSettings *assettings,QWidget *asender,char *aname);
void __stdcall readPositionSettings(QSettings *assettings,QWidget *asender,char *aname);
//---------------------------------------------------------------------------
extern TAtab_form *Atab_form;
extern TArne_form *Arne_form;
extern TDesk_form *Desk_form;
extern TExpo_form *Expo_form;
extern TLupa_form *Lupa_form;
extern TMain_form *Main_form;
extern TMove_form *Move_form;
extern TSize_form *Size_form;
extern TTips_form *Tips_form;
extern TZeus_form *Zeus_form;
extern TZoom_form *Zoom_form;
//---------------------------------------------------------------------------
extern ts::WindowsCOLLECTOR *Desktop;
extern ts::WindowsTILES *Tiles;
extern struct __GlobalKEYPressed
{ BOOL Ctrl, Alt, Tab;
  BOOL Locked;
  UINT Code;
} GlobalKEYPressed;
//---------------------------------------------------------------------------
extern LRESULT InitializeHooks(HINSTANCE ahInst, HWND ahWnd);
extern LRESULT DestroyHooks(void);
extern LRESULT WindowSwitcherProc(INT aCode, INT aEdge);
extern HHOOK llcwphook;
extern LRESULT CallWndProc(INT nCode, WPARAM wParam, LPARAM lParam);
extern HHOOK llmousehook;
extern LRESULT MouseProc(INT nCode, WPARAM wParam, LPARAM lParam);
extern HHOOK llkbdhhook;
extern LRESULT LowLevelKeyboardProc(INT nCode, WPARAM wParam, LPARAM lParam);
extern LRESULT ShortcutProc(INT aCode,INT);
//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------
