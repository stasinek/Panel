//---------------------------------------------------------------------------
#include "core.h"
//---------------------------------------------------------------------------

int main(int argc, char *argv[])
{
    Application = new QApplication(argc, argv);
    Settings = new QSettings("SSTSOFT", "Panel");

    Desktop = new ts::WindowsCOLLECTOR; Tiles = new ts::WindowsTILES;

    Tips_form = new TTips_form();
    Size_form = new TSize_form();
    Move_form = new TMove_form();
    Zoom_form = new TZoom_form();
    Lupa_form = new TLupa_form();
    Atab_form = new TAtab_form();
    Zeus_form = new TZeus_form();
    Arne_form = new TArne_form();
    Desk_form = new TDesk_form();
    Expo_form = new TExpo_form();
    Main_form = new TMain_form();

    //InitializeHooks((HINSTANCE)::GetModuleHandle(NULL),(HWND)(Main_form->winId()));
    Main_form->show();
    int ret = Application->exec();
    //DestroyHooks();

    delete Main_form;
    delete Tips_form;
    delete Zoom_form;
    delete Size_form;
    delete Desk_form;
    delete Lupa_form;
    delete Expo_form;
    delete Move_form;
    delete Atab_form;
    delete Arne_form;

    Settings->sync();
    delete Tiles; delete Desktop; delete Settings; delete Application;
    return ret;
}
//---------------------------------------------------------------------------
