#ifndef BOUNDS_RECTANGLEAREAWINDOW_H
#define BOUNDS_RECTANGLEAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_rectangle_area.h"
#include <rectangle/rectangle.h>

namespace Ui {
    class rectangleArea;
}

class RectangleAreaWin : public QDialog, private Ui::rectangleArea {
    Q_OBJECT
    public:
        explicit RectangleAreaWin(QWidget* parent = nullptr);

        private slots:
            void on_calculateBtn_clicked();
};

#endif
