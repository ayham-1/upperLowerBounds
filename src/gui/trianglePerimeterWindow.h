#ifndef BOUNDS_TRIANGLEPERIMETERWINDOW_H
#define BOUNDS_TRIANGLEPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_triangle_perimeter.h"
#include <triangle/triangle.h>

namespace Ui {
    class trianglePerimeter;
}

class TrianPerimeterWin : public QDialog, private Ui::trianglePerimeter {
    Q_OBJECT
    public:
        explicit TrianPerimeterWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
