#include <iostream>

#include <QApplication>

#include "methods/rectangle/rectangle.h"
#include <mainWindow.h>
int main(int argc, char **argv) {
    QApplication app(argc, argv);
    MainWin win;
    win.show();
    return app.exec();
}
