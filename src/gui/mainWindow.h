#ifndef BOUNDS_MAINWINDOW_H
#define BOUNDS_MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>

#include "ui_mainWindow.h"
#include "squareAreaWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWin : public QMainWindow, private Ui::MainWindow {
    Q_OBJECT
    public:
        explicit MainWin(QWidget* parent = nullptr);

    private slots:
        void on_selectBtn_clicked();
};

#endif
