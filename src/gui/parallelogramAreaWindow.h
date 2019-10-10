#ifndef BOUNDS_PARALLELOGRAMAREAWINDOW_H
#define BOUNDS_PARALLELOGRAMAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_parallelogram_area.h"
#include <parallelogram/parallelogram.h>

namespace Ui {
    class parallelogramArea;
}

class ParallelogramAreaWin : public QDialog, private Ui::parallelogramArea {
    Q_OBJECT
    public:
        explicit ParallelogramAreaWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
