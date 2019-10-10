#ifndef BOUNDS_SQRPERIMETERWINDOW_H
#define BOUNDS_SQRPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_square_perimeter.h"
#include <square/square.h>

namespace Ui {
    class squarePerimter;
}

class SquarePerimeterWin : public QDialog, private Ui::squarePerimter {
    Q_OBJECT
    public:
        explicit SquarePerimeterWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
