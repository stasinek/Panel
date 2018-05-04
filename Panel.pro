#-------------------------------------------------
#
# Project created by QtCreator 2014-05-15T15:59:11
#
#-------------------------------------------------
TARGET = Panel
TEMPLATE = app
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

DEFINES += QT_DLL

QT -= uitools
QT -= axserver axcontainer
QT -= qml qmltest
QT -= svg
QT -= webkit webkitwidgets
QT -= sql
QT -= serialport
QT -= sensors
QT -= multimedia
QT -= network
QT -= xml xmlpatterns

CONFIG += static
CONFIG += debug
CONFIG += rtti_off
CONFIG += exceptions_off
CONFIG += stl_off
CONFIG -= precompile_header
CONFIG += c++11

contains (QMAKE_COMPILER_DEFINES,__GNUC__) {

QMAKE_CXXFLAGS += -mpreferred-stack-boundary=4 -momit-leaf-frame-pointer -finline-small-functions
QMAKE_CXXFLAGS += -Os
QMAKE_CXXFLAGS += -Wno-write-strings
QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-unused-label
QMAKE_CXXFLAGS += -Wno-unused-value
QMAKE_CXXFLAGS += -fopenmp
QMAKE_CXXFLAGS += -Wunused-but-set-variable
LIBS += -lgomp
QMAKE_LFLAGS += -fopenmp
LIBS += -lwsock32 -lws2_32 -lgdi32
}
contains (QMAKE_COMPILER_DEFINES,_MSC_VER) {
LIBS += winmm.lib wsock32.lib ws2_32.lib crypt32.lib
LIBS += vcompd.lib
LIBS += gdi32.lib user32.lib shell32.lib ole32.lib oleaut32.lib kernel32.lib uuid.lib
}


SOURCES += main.cpp\
        ./../../../x86_win32_classes/tsoft_Context.cpp \
        ../../../x86_win32_classes/tsoft_WindowsMover.cpp \
        ../../../x86_win32_classes/tsoft_WindowsTile.cpp \
        ../../../x86_win32_classes/tsoft_WindowsCollector.cpp \
        ../../../x86_win32_classes/tsoft_WindowsSnap.cpp \
        zeus.cpp \
	tips.cpp \
	core.cpp \
	size.cpp \
	lupa.cpp \
	desk.cpp \
	move.cpp \
	atab.cpp \
	expo.cpp \
	main_form.cpp \
    zoom.cpp

HEADERS  += core.h \
        ../../../x86_win32_classes/tsoft_WindowsMover.h \
        ../../../x86_win32_classes/tsoft_WindowsCollector.h \
        ../../../x86_win32_classes/tsoft_WindowsTile.h \
        ../../../x86_win32_classes/tsoft_Context.h \
        ../../../x86_win32_classes/tsoft_WindowsSnap.h \
        zeus.h \
	tips.h \
	lupa.h \
	desk.h \
	move.h \
	atab.h \
	size.h \
	expo.h \
	main_form.h \
    zoom.h

FORMS    += \
	zeus.ui \
	tips.ui \
	size.ui \
	lupa.ui \
	desk.ui \
	move.ui \
	atab.ui \
	expo.ui \
        main.ui \
        zoom.ui

SOURCES +=  ekierka_form.cpp \
        wymiary_form.cpp

HEADERS  += ekierka_form.h \
        wymiary_form.h

FORMS    += ekierka_form.ui \
        wymiary_form.ui
	
RESOURCES += \
	panel.qrc
