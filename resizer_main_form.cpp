#include "resizer_main_form.h"
#include "ui_resizer_main_form.h"
#include <windows.h>
#include <windows.h>


Resizer_main_form::Resizer_main_form(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Resizer_main_form)
{   ui->setupUi(this);
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::gray);
    pen.setColor(Qt::gray);
    scene->addRect(0,0,400,300,pen,brush);
    pen.setColor(Qt::blue);
    brush.setColor(Qt::yellow);
    scene->addRect(0,0,150,100,pen,brush);
    scene->addText("Cześć");
}

Resizer_main_form::~Resizer_main_form()
{
    delete ui;
}

void Resizer_main_form::on_toolButton_4_clicked()
{
//show & hide
}

void Resizer_main_form::on_toolButton_7_clicked()
{
    DEVMODE DevMode; // >>
    DevMode.dmSize = sizeof (DEVMODE);

    static wchar_t *dev = new wchar_t[256];
    static wchar_t *num = new wchar_t[10];

    wcscpy(dev,TEXT("\\\\.\\DISPLAY"));
    int l = ui->comboBox_Display->currentText().toWCharArray((wchar_t*)num);
    num[l] = 0x0000L; wcscat(dev,num);
    if (EnumDisplaySettingsExW(dev,ENUM_CURRENT_SETTINGS,&DevMode,EDS_RAWMODE)==0) MessageBoxW(NULL, TEXT("Nie można pobrac ustawien"), dev, MB_OK | MB_ICONHAND);
    DevMode.dmPelsWidth        = ui->comboBox_X->currentText().toInt(0,10);
    DevMode.dmPelsHeight       = ui->comboBox_Y->currentText().toInt(0,10);
    DevMode.dmDisplayFrequency = ui->comboBox_Hz->currentText().toInt(0,10);
    DevMode.dmBitsPerPel       = ui->comboBox_BPP->currentText().toInt(0,10);
    DevMode.dmFields           = DM_BITSPERPEL|DM_PELSWIDTH|DM_PELSHEIGHT|DM_DISPLAYFREQUENCY;
    //
    if (ChangeDisplaySettingsExW(dev,&DevMode,NULL,CDS_TEST,NULL)==DISP_CHANGE_SUCCESSFUL) ChangeDisplaySettingsExW(dev,&DevMode,NULL,0,NULL);
                                                                 else MessageBoxW(NULL, TEXT("ZŁE USTAWIENIA, Twoja karta graficzna ich nie akceptuje\n\r"), dev, MB_OK | MB_ICONHAND);

}
