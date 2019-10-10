#ifndef BOUNDS_RECTANGLEPERIMETERWINDOW_H
#define BOUNDS_RECTANGLEPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_rectangle_perimeter.h"
#include <rectangle/rectangle.h>

namespace Ui {
    class rectanglePerimeter;
}

class RectanglePerimeterWin : public QDialog, private Ui::rectanglePerimeter {
    Q_OBJECT
    public:
        explicit RectanglePerimeterWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
