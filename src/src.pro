TEMPLATE = lib
TARGET = onyxtriambiencesettings-qt5
CONFIG += qt hide_symbols 
QT += dbus
QT -= gui

SOURCES += \
    settingsui.cpp

HEADERS += \
    settingsui.h

target.path = $$[QT_INSTALL_LIBS]

INSTALLS += target
