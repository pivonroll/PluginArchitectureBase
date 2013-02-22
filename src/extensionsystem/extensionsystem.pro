include(../config.pri)

TEMPLATE = lib
TARGET = ExtensionSystem
CONFIG += shared dll

HEADERS += \
    extensionsystem_global.h \
    pluginmanager.h \
    imyplugininterface.h

SOURCES += \
    pluginmanager.cpp \
    imyplugininterface.cpp

DESTDIR = $$LIBRARY_PATH
