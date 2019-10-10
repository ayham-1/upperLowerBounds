#include "circlePerimeterWindow.h"

CirclePerimeterWin::CirclePerimeterWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        perimeterText->setValidator(new QDoubleValidator());
        radiusText->setValidator(new QDoubleValidator());
        diameterText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void CirclePerimeterWin::on_calculateBtn_clicked() {
    if (perimeterText->text().toStdString() == "" ||
            radiusText->text().toStdString() == "" ||
            diameterText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto perimeter = float{std::stof(perimeterText->text().toStdString())};
    auto radius = float{std::stof(radiusText->text().toStdString())};
    auto diameter = float{std::stof(diameterText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = circle_calc_perimeter(me, radius, diameter, perimeter);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
