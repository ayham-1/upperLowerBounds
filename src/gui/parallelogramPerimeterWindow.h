#ifndef BOUNDS_PARALLELOGRAMPERIMETERWINDOW_H
#define BOUNDS_PARALLELOGRAMPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_parallelogram_perimeter.h"
#include <parallelogram/parallelogram.h>

namespace Ui {
    class parallelogramPerimeter;
}

class ParallelogramPerimeterWin : public QDialog, private Ui::parallelogramPerimeter {
    Q_OBJECT
    public:
        explicit ParallelogramPerimeterWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
