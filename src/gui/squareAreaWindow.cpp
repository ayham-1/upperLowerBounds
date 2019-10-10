#include "squareAreaWindow.h"

SquareAreaWin::SquareAreaWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        areaText->setValidator(new QDoubleValidator());
        sideText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void SquareAreaWin::on_calculateBtn_clicked() {
    if (areaText->text().toStdString() == "" ||
            sideText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto area = float{std::stof(areaText->text().toStdString())};
    auto side = float{std::stof(sideText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = sqr_calc_area(me, side, area);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
