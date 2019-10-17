#ifndef BOUNDS_EQUTRIANAREAWINDOW_H
#define BOUNDS_EQUTRIANAREAWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QDoubleValidator>

#include "ui_equ_trian_area.h"
#include <equ_triangle/equ_triangle.h>

namespace Ui {
    class equTrianArea;
}

class EquTrianAreaWin : public QDialog, private Ui::equTrianArea {
    Q_OBJECT
    public:
        explicit EquTrianAreaWin(QWidget* parent = nullptr);

        private slots:
            void on_calculateBtn_clicked();
};

#endif
