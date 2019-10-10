#include "mainWindow.h"

MainWin::MainWin(QWidget* parent)
    : QMainWindow(parent) {
        setupUi(this);
}

void MainWin::on_selectBtn_clicked() {
    SquareAreaWin* win = new SquareAreaWin();
    win->show();
    hide();
}
