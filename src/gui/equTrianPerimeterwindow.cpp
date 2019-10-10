#include "equTrianPerimeterWindow.h"

EquTrianPerimeterWin::EquTrianPerimeterWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        perimeterText->setValidator(new QDoubleValidator());
        sideText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void EquTrianPerimeterWin::on_calculateBtn_clicked() {
    if (perimeterText->text().toStdString() == "" ||
            sideText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto perimeter = float{std::stof(perimeterText->text().toStdString())};
    auto side = float{std::stof(sideText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = etrian_calc_perimeter(me, side, perimeter);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
