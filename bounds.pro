QT += widgets
TARGET = upperlowerBounds
CONFIG += object_parallel_to_source
CONFIG += c++17
INCLUDEPATH += src \
               src/methods \
               src/gui \

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
    src/methods/circle/circle.h \
    src/methods/equ_triangle/equ_triangle.h \
    src/methods/triangle/triangle.h \
    src/methods/parallelogram/parallelogram.h \
    src/methods/rectangle/rectangle.h \
    src/methods/square/square.h \
    src/defs.h

SOURCES += \
    src/gui/circleAreaWindow.cpp \
    src/gui/circlePerimeterWindow.cpp \
    src/gui/equTrianAreaWindow.cpp \
    src/gui/main.cpp \
    src/gui/mainWindow.cpp \
    src/gui/parallelogramAreaWindow.cpp \
    src/gui/parallelogramPerimeterWindow.cpp \
    src/gui/rectangleAreaWindow.cpp \
    src/gui/rectanglePerimeterWindow.cpp \
    src/gui/squareAreaWindow.cpp \
    src/gui/squarePerimeterWindow.cpp \
    src/gui/triangleAreaWindow.cpp \
    src/gui/trianglePerimeterWindow.cpp \
    src/methods/circle/area.cpp \
    src/methods/circle/perimeter.cpp \
    src/methods/equ_triangle/area.cpp \
    src/methods/equ_triangle/height.cpp \
    src/methods/equ_triangle/perimeter.cpp \
    src/methods/triangle/area.cpp \
    src/methods/triangle/perimeter.cpp \
    src/methods/parallelogram/area.cpp \
    src/methods/parallelogram/perimeter.cpp \
    src/methods/rectangle/area.cpp \
    src/methods/rectangle/perimeter.cpp \
    src/methods/square/area.cpp \
    src/methods/square/perimeter.cpp \
    src/gui/equTrianPerimeterwindow.cpp
