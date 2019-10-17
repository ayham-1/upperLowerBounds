#ifndef BOUNDS_EQUTRIANPERIMETERWINDOW_H
#define BOUNDS_EQUTRIANPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_equ_trian_perimeter.h"
#include <equ_triangle/equ_triangle.h>

namespace Ui {
    class equTrianPerimeter;
}

class EquTrianPerimeterWin : public QDialog, private Ui::equTrianPerimeter {
    Q_OBJECT
    public:
        explicit EquTrianPerimeterWin(QWidget* parent = nullptr);

        private slots:
            void on_calculateBtn_clicked();
};

#endif
