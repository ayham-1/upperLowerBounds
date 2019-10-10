#include "parallelogramAreaWindow.h"

ParallelogramAreaWin::ParallelogramAreaWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
        areaText->setValidator(new QDoubleValidator());
        heightText->setValidator(new QDoubleValidator());
        baseText->setValidator(new QDoubleValidator());
        maxErrorText->setValidator(new QDoubleValidator());
}

void ParallelogramAreaWin::on_calculateBtn_clicked() {
    if (areaText->text().toStdString() == "" ||
            heightText->text().toStdString() == "" ||
            baseText->text().toStdString() == "" ||
            maxErrorText->text().toStdString() == "") {
        plainTextEdit->setPlainText(QString::fromStdString("Nothing computes to nothing.\nFill the blanks!"));
        return;
    }

    auto area = float{std::stof(areaText->text().toStdString())};
    auto base = float{std::stof(baseText->text().toStdString())};
    auto height = float{std::stof(heightText->text().toStdString())};
    auto me = float{std::stof(maxErrorText->text().toStdString())};
    uplowBounds res;

    try {
        res = parall_calc_area(me, base, height, area);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\nLB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument& error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
