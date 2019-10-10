#include "trianglePerimeterWindow.h"

TrianPerimeterWin::TrianPerimeterWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        perimeterText->setValidator(new QDoubleValidator());
        sideAText->setValidator(new QDoubleValidator());
        sideBText->setValidator(new QDoubleValidator());
        sideCText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void TrianPerimeterWin::on_calculateBtn_clicked() {
    if (perimeterText->text().toStdString() == "" ||
            sideAText->text().toStdString() == "" ||
            sideBText->text().toStdString() == "" ||
            sideCText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto perimeter = float{std::stof(perimeterText->text().toStdString())};
    auto a = float{std::stof(sideAText->text().toStdString())};
    auto b = float{std::stof(sideBText->text().toStdString())};
    auto c = float{std::stof(sideCText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = trian_calc_perimeter(me, perimeter, a, b, c);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
