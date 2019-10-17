#ifndef BOUNDS_CIRCLEPERIMETERWINDOW_H
#define BOUNDS_CIRCLEPERIMETERWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_circle_perimeter.h"
#include <circle/circle.h>

namespace Ui {
    class circlePerimeter;
}

class CirclePerimeterWin : public QDialog, private Ui::circlePerimeter {
    Q_OBJECT
    public:
        explicit CirclePerimeterWin(QWidget* parent = nullptr);

        private slots:
            void on_calculateBtn_clicked();
};

#endif
