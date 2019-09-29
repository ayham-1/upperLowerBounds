QT += widgets
INCLUDEPATH += src/ \
               src/gui/ \

FORMS += \
    src/gui/circle_area.ui \
    src/gui/circle_perimeter.ui \
    src/gui/equ_trian_area.ui \
    src/gui/equ_trian_perimeter.ui \
    src/gui/mainWindow.ui \
    src/gui/parallelogram_area.ui \
    src/gui/parallelogram_perimeter.ui \
    src/gui/rectangle_area.ui \
    src/gui/rectangle_perimeter.ui \
    src/gui/square_area.ui \
    src/gui/square_perimeter.ui \
    src/gui/triangle_area.ui \
    src/gui/triangle_perimeter.ui

HEADERS += \
    src/gui/circleAreaWindow.h \
    src/gui/circlePerimeterWindow.h \
    src/gui/equTrianAreaWindow.h \
    src/gui/equTrianPerimeterWindow.h \
    src/gui/mainWindow.h \
    src/gui/parallelogramAreaWindow.h \
    src/gui/parallelogramPerimeterWindow.h \
    src/gui/rectangleAreaWindow.h \
    src/gui/rectanglePerimeterWindow.h \
    src/gui/squareAreaWindow.h \
    src/gui/squarePerimeterWindow.h \
    src/gui/triangleAreaWindow.h \
    src/gui/trianglePerimeterWindow.h \
    src/defs.h

SOURCES += \
    src/gui/mainWindow.cpp \
    src/gui/main.cpp
