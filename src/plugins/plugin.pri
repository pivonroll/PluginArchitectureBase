include(../extensionsystem/extensionsystem.pri)
CONFIG += plugin

unix:!macx {
   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN
   QMAKE_LFLAGS += -Wl,--rpath=\\\$\$ORIGIN/../lib
}

