#ifndef BOUNDS_TRIANGLEAREAWINDOW_H
#define BOUNDS_TRIANGLEAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_triangle_area.h"
#include <triangle

namespace Ui {
    class triangleArea;
}

class TrianAreaWin : public QDialog, private Ui::triangleArea {
    Q_OBJECT
    public:
        explicit TrianAreaWin(QWidget* parent = nullptr);

    private slots:
        void on_calculateBtn_clicked();
};

#endif
