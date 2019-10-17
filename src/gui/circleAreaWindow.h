#ifndef BOUNDS_CIRCLEAREAWINDOW_H
#define BOUNDS_CIRCLEAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_circle_area.h"
#include <circle/circle.h>

namespace Ui {
    class circleArea;
}

class CircleAreaWin : public QDialog, private Ui::circleArea {
    Q_OBJECT
    public:
        explicit CircleAreaWin(QWidget* parent = nullptr);

        private slots:
            void on_calculateBtn_clicked();
};

#endif
