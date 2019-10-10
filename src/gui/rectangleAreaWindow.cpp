#include "rectangleAreaWindow.h"

RectangleAreaWin::RectangleAreaWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        areaText->setValidator(new QDoubleValidator());
        lengthText->setValidator(new QDoubleValidator());
        widthText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void RectangleAreaWin::on_calculateBtn_clicked() {
    if (areaText->text().toStdString() == "" ||
            lengthText->text().toStdString() == "" ||
            widthText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto area = float{std::stof(areaText->text().toStdString())};
    auto length = float{std::stof(lengthText->text().toStdString())};
    auto width = float{std::stof(widthText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = rect_calc_area(me, width, length, area);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
