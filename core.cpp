#include "core.h"
#include "main_form.h"
//---------------------------------------------------------------------------
QApplication *Application;
TMain_form *Main_form;
TZeus_form *Zeus_form;
TZoom_form *Zoom_form;
TLupa_form *Lupa_form;
TTips_form *Tips_form;
TSize_form *Size_form;
TDesk_form *Desk_form;
TAtab_form *Atab_form;
TExpo_form *Expo_form;
TMove_form *Move_form;

ts::WindowsCOLLECTOR *Desktop;
ts::WindowsTILES *Tiles;
struct __GlobalKEYPressed GlobalKEYPressed;
HANDLE hMutex;

LRESULT InitializeHooks(HINSTANCE ahInstance, HWND ahWnd) {

	hMutex = ::CreateMutexA(NULL,TRUE,"tsoftPanel_mutex");
	if  (GetLastError()==ERROR_ALREADY_EXISTS)
		{return MessageBoxW(0,TEXT("Próbujesz uruchomić kilkukrotnie, to nie ma sensu ;-)"),
						   TEXT("__tsoft->Panel.exe"),
					   MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
		 }
	//------------------------------------
	GlobalKEYPressed.Ctrl = GlobalKEYPressed.Alt = GlobalKEYPressed.Locked = false;
	llkbdhhook = SetWindowsHookEx(WH_KEYBOARD_LL,(HOOKPROC)LowLevelKeyboardProc, (HINSTANCE)ahInstance, 0);
	// mousehook = SetWindowsHookEx(WH_MOUSE,(HOOKPROC)MouseProc, (HINSTANCE)ahInstance, 0);
	//   cwphook = SetWindowsHookEx(WH_CALLWNDPROC,(HOOKPROC)Call_formProc, (HINSTANCE)ahInstance, 0);
	//------------------------------------
	Desktop = new ts::WindowsCOLLECTOR();
	Tiles = new ts::WindowsTILES();
	// hide from taskbar
	DWORD dwExStyle = GetWindowLong((HWND)ahWnd,GWL_EXSTYLE);
	SetWindowLong((HWND)ahWnd, GWL_EXSTYLE, dwExStyle|=WS_EX_TOOLWINDOW);
	SetPriorityClass(GetCurrentProcess(),HIGH_PRIORITY_CLASS);
	//------------------------------------
	return true;
}
LRESULT DestroyHooks(void) {
delete Desktop;
delete Tiles;
UnhookWindowsHookEx(llkbdhhook);
::CloseHandle(hMutex);
return true;
}

LRESULT WindowswitcherProc(INT aCode, INT aPhase) {
//------------------------------------
register __int8 ac = (GlobalKEYPressed.Ctrl==true) && (GlobalKEYPressed.Alt==true);
if (!ac) return 0;

if (aCode==VK_TAB && aPhase==WM_KEYDOWN) {
/*
		 if (Is_formVisible(Atab_form->Handle)==false)
			{Show_form(Atab_form->Handle,SW_SHOW);
			 Atab_form->tform_Start();
			}
		 else
			{Atab_form->tform_Switch();
			}*/
		 GlobalKEYPressed.Locked = 1;
		 return 1;
}
if (GlobalKEYPressed.Locked==1)    {

		 //Show_form(Atab_form->Handle,SW_HIDE);
		 /*if (Atab_form->curicon!=Atab_form->oldicon)
			{h = Atab_form->apps.Windows[Atab_form->oldicon];
			 Show_form(h,SW_SHOW);
			 Bring_formToTop(h);
			}*/
		 GlobalKEYPressed.Locked = 0;
		 return 1;
}

return 0;
}

//---------------------------------------------------------------------------

LRESULT ShortcutProc(INT a_Code, INT) {
static HWND fore_window = NULL;
LONG wexstyle, classstyle;
switch (a_Code) {
//------------------------------------
case VK_END: // kill application on top
//------------------------------------
if (Desktop->Action(KILL_PROCESS,GetForegroundWindow(),0,0))
	Tips_form->Execute("Proces: KONIEC",true,false);
return true;
//------------------------------------
case VK_F5: // idle app
//------------------------------------
if (Desktop->Action(SET_PRIORITY,GetForegroundWindow(),IDLE_PRIORITY_CLASS,0))
	Tips_form->Execute("Proces: IDLE",true,true);
return true;
//------------------------------------
case VK_F6: // normal app
//------------------------------------
if (Desktop->Action(SET_PRIORITY,GetForegroundWindow(),NORMAL_PRIORITY_CLASS,0))
	Tips_form->Execute("Proces: NORMAL",true,true);
return true;
//------------------------------------
case VK_F7: // high app
//------------------------------------
if (Desktop->Action(SET_PRIORITY,GetForegroundWindow(),HIGH_PRIORITY_CLASS,0))
	Tips_form->Execute("Proces: HIGH",true,true);
return true;
//------------------------------------
case VK_F8: // realtime app
//------------------------------------
if (Desktop->Action(SET_PRIORITY,GetForegroundWindow(),REALTIME_PRIORITY_CLASS,0))
	Tips_form->Execute("Process: REALTIME",true,true);
return true;
//------------------------------------
case '1': // switch to desk 1
//------------------------------------
//Desk_form->Desktop_Switch(1,true);
Tips_form->Execute("BIURKO: 1",true,false);
return true;
//------------------------------------
case '2': // switch to desk 2
//------------------------------------
//Desk_form->Desktop_Switch(2,true);
Tips_form->Execute("BIURKO: 2",true,false);
return true;
//------------------------------------
case '3': // switch to desk 3
//------------------------------------
//Desk_form->Desktop_Switch(3,true);
Tips_form->Execute("BIURKO: 3",true,false);
return true;
//------------------------------------
case '4': // switch to desk 4
//------------------------------------
//Desk_form->Desktop_Switch(4,true);
Tips_form->Execute("BIURKO: 4",true,false);
return true;
//------------------------------------
case '5': // switch to desk share
//------------------------------------
//Desk_form->Desktop_Switch(0,true);
Tips_form->Execute("BIURKO: *",true,false);
return true;
//------------------------------------
case VK_ADD: // increse zoom factor
//------------------------------------
/*if (Lupa_form->Visible==false)
	break;
	Lupa_form->SubMenuZoomClick(NULL);
if (Lupa_form->MenuItemZoom06->Checked && Lupa_form->MenuItemZoom08->Visible)
   {Lupa_form->MenuItemZoom08->Checked;
	Lupa_form->MenuItemZoom08Click(NULL);
	Tips_form->Execute("LUPA: zoom 8:1", true,false);
   }
if (Lupa_form->MenuItemZoom04->Checked && Lupa_form->MenuItemZoom06->Visible)
   {Lupa_form->MenuItemZoom06->Checked;
	Lupa_form->MenuItemZoom06Click(NULL);
	Tips_form->Execute("LUPA: zoom 6:1", true,false);
   }
if (Lupa_form->MenuItemZoom03->Checked && Lupa_form->MenuItemZoom04->Visible)
   {Lupa_form->MenuItemZoom04->Checked;
	Lupa_form->MenuItemZoom04Click(NULL);
	Tips_form->Execute("LUPA: zoom 4:1", true,false);
   }
if (Lupa_form->MenuItemZoom02->Checked && Lupa_form->MenuItemZoom03->Visible)
   {Lupa_form->MenuItemZoom03->Checked;
	Lupa_form->MenuItemZoom03Click(NULL);
	Tips_form->Execute("LUPA: zoom 3:1", true,false);
   }
  */
return true;
//------------------------------------
case VK_SUBTRACT: // decrese zoom factor
//------------------------------------
/*if (Lupa_form->Visible==false)
	break;
	Lupa_form->SubMenuZoomClick(NULL);
if (Lupa_form->MenuItemZoom03->Checked && Lupa_form->MenuItemZoom02->Visible)
   {Lupa_form->MenuItemZoom02->Checked;
	Lupa_form->MenuItemZoom02Click(NULL);
	Tips_form->Execute("LUPA: zoom 2:1", true,false);
   }
if (Lupa_form->MenuItemZoom04->Checked && Lupa_form->MenuItemZoom03->Visible)
   {Lupa_form->MenuItemZoom03->Checked;
	Lupa_form->MenuItemZoom03Click(NULL);
	Tips_form->Execute("LUPA: zoom 3:1", true,false);
   }
if (Lupa_form->MenuItemZoom06->Checked && Lupa_form->MenuItemZoom04->Visible)
   {Lupa_form->MenuItemZoom04->Checked;
	Lupa_form->MenuItemZoom04Click(NULL);
	Tips_form->Execute("LUPA: zoom 4:1", true,false);
   }
if (Lupa_form->MenuItemZoom08->Checked && Lupa_form->MenuItemZoom06->Visible)
   {Lupa_form->MenuItemZoom06->Checked;
	Lupa_form->MenuItemZoom06Click(NULL);
	Tips_form->Execute("LUPA: zoom 6:1", true,false);
   }
   */
return true;
//------------------------------------
case VK_MULTIPLY: // center lupa on screen
//------------------------------------
//Lupa_form->Na1Click(NULL);
return true;
//------------------------------------
case 'P': // show main _form
//------------------------------------
//Main_form->tform_Align();
//Main_form->Visible=!Main_form->Visible;
return true;
//------------------------------------
case 'L': // show zoom _form
//------------------------------------
//Lupa_form->tform_Align();
//Main_form->SpeedButtonLupa->Down = !Main_form->SpeedButtonLupa->Down;
//Main_form->SpeedButtonLupa->Click();
return true;
//------------------------------------
case 'G': // show desk _form
//------------------------------------
//Desk_form->tform_Align();
//Main_form->SpeedButtonDesk5->Down = !Main_form->SpeedButtonDesk5->Down;
//Main_form->SpeedButtonDesk5->Click();
return true;
//------------------------------------
case 'M': // show move _form
//------------------------------------
//Move_form->HwndToMove = GetForegroundWindow();
//if (Move_form->HwndToMove==Main_form->Handle || Move_form->HwndToMove==Lupa_form->Handle || Move_form->HwndToMove==Desk_form->Handle)
//   {MessageBeep(MB_ICONEXCLAMATION);
//     return false;
//    }
//Move_form->Visible =!Move_form->Visible;
return true;
case 'S': // set shadow
//------------------------------------
fore_window = GetForegroundWindow();
wexstyle = GetWindowLong(fore_window,GWL_EXSTYLE) | WS_EX_LAYERED | WS_EX_COMPOSITED;
//if (!SetWindowLong(fore_window,GWL_EXSTYLE,wexstyle))
	Tips_form->Execute("Okno: COMPOSITED",true,false);
SetLayeredWindowAttributes(fore_window, 0x00000000, 255, LWA_COLORKEY);
					Sleep(1);
classstyle = GetClassLong(fore_window,GCL_STYLE) | CS_DROPSHADOW;
//if (!SetClassLong(fore_window,GCL_STYLE,classstyle))
	Tips_form->Execute("Okno: DROPSHADOW",true,false);
return true;
//------------------------------------
case 'T': // set transparency of application on top
//------------------------------------
fore_window = GetForegroundWindow();
if (Desktop->Action(GET_TRANSPARENCY,fore_window,0,0)<=0) {
		if (Desktop->Action(SET_TRANSPARENCY,fore_window,20,0))
				Tips_form->Execute("Okno: PRZEZROCZYSTE",true,false);
		}
else {
		if (Desktop->Action(SET_TRANSPARENCY,fore_window,-1,0))
				Tips_form->Execute("Okno: NORMALNE",true,false);
		}
return true;
//------------------------------------
case VK_LWIN: // ctose this app
//------------------------------------
//
Tips_form->Execute("Panel: ADIOS AMIGO!",true,true);
//Main_form->tform_Save();
//Desk_form->tform_Save();
//Lupa_form->tform_Save();

Sleep(500);
//Application->Terminate();
return true;
// nic nie znaleziono, koniec
default:
break;
}
return 0; // nic  nie znaleziono zwracam 0 ¿eby pozwoliæ na obs³uge innym programom.
}
//---------------------------------------------------------------------------
//NISKOPOZIOMOWE PRZECHWYTYWANIE OKIEN
//
HHOOK cwphook;
LRESULT CallWndProc(INT nCode, WPARAM wParam, LPARAM lParam) {
if (nCode==HC_ACTION) return true;
else return CallNextHookEx(cwphook,nCode,wParam,lParam);
}
//---------------------------------------------------------------------------
//NISKOPOZIOMOWE PRZECHWYTYWANIE MYSZY
//
HHOOK mousehook;
LRESULT MouseProc(INT nCode, WPARAM wParam, LPARAM lParam) {
if (nCode >=0) return true;
else return CallNextHookEx(mousehook,nCode,wParam,lParam);
}
//---------------------------------------------------------------------------
//NISKOPOZIOMOWE PRZECHWYTYWANIE KLAWISZY, CTRL+ALT + TAB(WindowswitcherProc) lub pozosta³e (ShortcutProc)
//
HHOOK llkbdhhook;
LRESULT LowLevelKeyboardProc(INT nCode, WPARAM wParam, LPARAM lParam) {
if (nCode!=HC_ACTION)
   {return CallNextHookEx(llkbdhhook,nCode,wParam,lParam);
   }
register BOOL fProcHandled;
register KBDLLHOOKSTRUCT *pkbdllhook = (KBDLLHOOKSTRUCT*)lParam;
//------------------------------------

// obs³uga naciœcienia klawisza, Ctrl, Alt, Tab i przekazanie dalej jeœli oba aktywne Ctrl+Alt
if (wParam==WM_KEYDOWN) {
switch (pkbdllhook->vkCode) {
case VK_LCONTROL:
GlobalKEYPressed.Ctrl =true;
goto KBRETURN;
break;
case VK_LMENU:
GlobalKEYPressed.Alt  =true;
goto KBRETURN;
break;
case VK_TAB:
GlobalKEYPressed.Tab = true;

if (GlobalKEYPressed.Alt==true && GlobalKEYPressed.Ctrl==true) goto CTALTTAB;
else goto KBRETURN;

default:

if (GlobalKEYPressed.Alt==true && GlobalKEYPressed.Ctrl==true) goto SHORTCUT;
else goto KBRETURN;
break;
}}
else {
 // obs³uga zwolnienia klawisza Ctrl, Alt lub Tab i przekazanie dalej
if (wParam==WM_KEYUP)
switch (pkbdllhook->vkCode) {
case VK_LCONTROL:
GlobalKEYPressed.Ctrl=false;
if (GlobalKEYPressed.Locked==true) goto CTALTTAB;
else goto KBRETURN;
case VK_LMENU:
GlobalKEYPressed.Alt =false;
if (GlobalKEYPressed.Locked==true) goto CTALTTAB;
else goto KBRETURN;
}}
// domyœlnie uznaj ¿e klawisz nie zosta³ ods³u¿ony przeka¿ akcje kolejnemu programowi.
//------------------------------------
KBRETURN:
return CallNextHookEx(llkbdhhook,nCode,wParam,lParam);
//------------------------------------
CTALTTAB:
fProcHandled = WindowswitcherProc(pkbdllhook->vkCode,wParam);
if (fProcHandled) return true;
else CallNextHookEx(llkbdhhook,nCode,wParam,lParam);
//------------------------------------
SHORTCUT:
fProcHandled = ShortcutProc(pkbdllhook->vkCode,wParam);
if (fProcHandled)
{ GlobalKEYPressed.Ctrl = false; GlobalKEYPressed.Alt = false;
return true;}
else CallNextHookEx(llkbdhhook,nCode,wParam,lParam);
return true;
}
//---------------------------------------------------------------------------
