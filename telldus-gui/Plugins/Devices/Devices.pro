# -------------------------------------------------
# Project created by QtCreator 2009-03-10T12:16:44
# -------------------------------------------------
CONFIG += release
QT += core \
    gui
TARGET = Devices
TEMPLATE = lib
CONFIG += plugin
SOURCES += devicesplugin.cpp
HEADERS += devicesplugin.h
#RESOURCES += Devices.qrc
macx {
    LIBS += -F../../TelldusCenter/TelldusCenter.app/Contents/Frameworks -framework \
        TelldusGui -framework TelldusCore
    DESTDIR = ../../TelldusCenter/TelldusCenter.app/Contents/Plugins
}
!macx {
    LIBS += -ltelldus-gui
    DESTDIR = ../../TelldusCenter/Plugins
}
