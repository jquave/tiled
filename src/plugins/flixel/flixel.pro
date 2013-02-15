include(../plugin.pri)

DEFINES += FLARE_LIBRARY

greaterThan(QT_MAJOR_VERSION, 4) {
    OTHER_FILES = plugin.json
}

HEADERS += \
    flixel_global.h \
    flixelplugin.h

SOURCES += \
    flixelplugin.cpp


