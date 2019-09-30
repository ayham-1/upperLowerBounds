#include "mainWindow.h"

MainWin::MainWin(QWidget* parent)
    : QMainWindow(parent) {
        setupUi(this);
}

void MainWin::on_selectBtn_clicked() {
    QMessageBox::information(this, tr("Hello This works."), tr("Probably works."));
}
