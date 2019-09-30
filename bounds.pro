QT += widgets
TARGET = upperLowerBounds
INCLUDEPATH += src/ \
               src/gui/ \

FORMS += \
    src/gui/mainWindow.ui \
    src/gui/rectangle_area.ui \
    src/gui/rectangle_perimeter.ui \
    src/gui/circle_area.ui \
    src/gui/circle_perimeter.ui \
    src/gui/equ_trian_area.ui \
    src/gui/equ_trian_perimeter.ui \
    src/gui/parallelogram_area.ui \
    src/gui/parallelogram_perimeter.ui \
    src/gui/rectangle_area.ui \
    src/gui/rectangle_perimeter.ui \
    src/gui/square_area.ui \
    src/gui/square_perimeter.ui \
    src/gui/triangle_area.ui \
    src/gui/triangle_perimeter.ui \

HEADERS += \
    src/defs.h \
    src/gui/mainWindow.h \
    src/gui/rectangleAreaWindow.h \
    src/gui/rectanglePerimeterWindow.h \
    src/gui/circleAreaWindow.h \
    src/gui/circlePerimeterWindow.h \
    src/gui/parallelogramAreaWindow.h \
    src/gui/parallelogramPerimeterWindow.h \
    src/gui/triangleAreaWindow.h \
    src/gui/trianglePerimeterWindow.h \
    src/gui/squareAreaWindow.h \
    src/gui/squarePerimeterWindow.h \
    src/gui/rectangleAreaWindow.h \
    src/gui/rectanglePerimeterWindow.h \
    src/gui/rectangleAreaWindow.h \
    src/gui/rectanglePerimeterWindow.h \

SOURCES += \
    src/gui/main.cpp \
    src/gui/mainWindow.cpp \
    src/methods/rectangle/area.cpp \
    src/methods/rectangle/perimeter.cpp \
    src/gui/circleAreaWindow.cpp \
    src/gui/circlePerimeterWindow.cpp \
    src/gui/parallelogramAreaWindow.cpp \
    src/gui/parallelogramPerimeterWindow.cpp \
    src/gui/triangleAreaWindow.cpp \
    src/gui/trianglePerimeterWindow.cpp \
    src/gui/squareAreaWindow.cpp \
    src/gui/squarePerimeterWindow.cpp \
    src/gui/rectangleAreaWindow.cpp \
    src/gui/rectanglePerimeterWindow.cpp \
    src/gui/rectangleAreaWindow.cpp \
    src/gui/rectanglePerimeterWindow.cpp \
