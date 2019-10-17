#include "mainWindow.h"

MainWin::MainWin(QWidget* parent)
    : QMainWindow(parent) {
        setupUi(this);
    }

void MainWin::on_selectBtn_clicked() {
    QString sval = formulaBox->currentText();
    if (sval == "Square Formula: Area") {
        SquareAreaWin *win = new SquareAreaWin(this);
        connect(win, SIGNAL(destroyed()), win, SLOT(show()));
        win->open();
    }
    else if (sval == "Square Formula: Perimeter") {
        SquarePerimeterWin *win = new SquarePerimeterWin(this);
        win->open();
    }
    else if (sval == "Rectangle Formula: Area") {
        RectangleAreaWin *win = new RectangleAreaWin(this);
        win->open();
    }
    else if (sval == "Rectangle Formula: Perimeter") {
        RectanglePerimeterWin *win = new RectanglePerimeterWin(this);
        win->open();
    }
    else if (sval == "Triangle Formula: Area") {
        TrianAreaWin *win = new TrianAreaWin(this);
        win->open();
    }
    else if (sval == "Triangle Formula: Perimeter") {
        TrianPerimeterWin *win = new TrianPerimeterWin(this);
        win->open();
    }
    else if (sval == "Equilateral Triangle Formula: Area") {
        EquTrianAreaWin *win = new EquTrianAreaWin(this);
        win->open();
    }
    else if (sval == "Equilateral Triangle Formula: Perimeter") {
        EquTrianPerimeterWin *win = new EquTrianPerimeterWin(this);
        win->open();
    }
    else if (sval == "Parallelogram Formula: Area") {
        ParallelogramAreaWin *win = new ParallelogramAreaWin(this);
        win->open();
    }
    else if (sval == "Parallelogram Formula: Perimeter") {
        ParallelogramPerimeterWin *win = new ParallelogramPerimeterWin(this);
        win->open();
    }
    else if (sval == "Circle Formula: Area") {
        CircleAreaWin *win = new CircleAreaWin(this);
        win->open();
    }
    else if (sval == "Circle Formula: Perimeter") {
        CirclePerimeterWin *win = new CirclePerimeterWin(this);
        win->open();
    }
}
