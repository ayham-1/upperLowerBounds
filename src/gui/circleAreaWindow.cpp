#include "circleAreaWindow.h"

CircleAreaWin::CircleAreaWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        areaText->setValidator(new QDoubleValidator());
        radiusText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void CircleAreaWin::on_calculateBtn_clicked() {
    if (areaText->text().toStdString() == "" ||
            radiusText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto area = float{std::stof(areaText->text().toStdString())};
    auto radius = float{std::stof(radiusText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = circle_calc_area(me, radius, area);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
