#include <iostream>

#include <QApplication>

#include "methods/rectangle/rectangle.h"
#include <mainWindow.h>
int main(int argc, char **argv) {
    QApplication app(argc, argv);
    MainWin win;
    win.show();
    rect_calc_area(0.5f, 5.0f, 10.0f);
    return app.exec();
}
