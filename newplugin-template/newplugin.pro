include(../plugin.pri)

DEFINES += %PluginName:u%_LIBRARY

TEMPLATE = lib
TARGET = $$qtLibraryTarget(%PluginName:l%)

DESTDIR = $$PLUGIN_PATH

INCLUDEPATH += ../../extensionsystem

LIBS *= -lExtensionSystem

HEADERS += \
    %PluginName:l%.%CppHeaderSuffix:l%

SOURCES += \
    %PluginName:l%.%CppSourceSuffix:l%
    
OTHER_FILES += \
	%PluginName:l%.json
