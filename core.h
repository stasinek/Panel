#ifndef __Core_HDR__
#define __Core_HDR__
#include <QApplication>
#include "windows.h"
#include "wingdi.h"
#include "winuser.h"
#include "..\..\..\..\x86_win32_classes\tsoft_WindowsMover.h"
#include "..\..\..\..\x86_win32_classes\tsoft_WindowsCollector.h"
//---------------------------------------------------------------------------
#include "main_form.h"
#include "zeus.h"
#include "size.h"
#include "lupa.h"
#include "expo.h"
#include "atab.h"
#include "desk.h"
#include "move.h"
#include "tips.h"
#include "zoom.h"

extern QApplication *Application;
extern TMain_form *Main_form;
extern TLupa_form *Lupa_form;
extern TTips_form *Tips_form;
extern TSize_form *Size_form;
extern TDesk_form *Desk_form;
extern TAtab_form *Atab_form;
extern TExpo_form *Expo_form;
extern TMove_form *Move_form;
extern TZeus_form *Zeus_form;
extern TZoom_form *Zoom_form;

extern ts::WindowsCOLLECTOR *Desktop;
extern ts::WindowsTILES *Tiles;
extern struct __GlobalKEYPressed
{ BOOL Ctrl, Alt, Tab;
  BOOL Locked;
  UINT Code;
} GlobalKEYPressed;

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
