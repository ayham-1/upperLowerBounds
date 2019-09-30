#ifndef BOUNDS_SQRAREAWINDOW_H
#define BOUNDS_SQRAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>

#include "ui_square_area.h"
#include "methods/square/square.h"

namespace Ui {
    class squareArea;
}

class SquareAreaWin : public QDialog, private Ui::squareArea {
    Q_OBJECT
    public:
        explicit SquareAreaWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
