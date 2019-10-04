#include "squareAreaWindow.h"

SquareAreaWin::SquareAreaWin(QWidget* parent)
    : QDialog(parent) {
        setupUi(this);
}

void SquareAreaWin::on_calculateBtn_clicked() {
    QMessageBox::information(this, tr("Hello This works."), tr("Probably works."));

    auto area = std::stof(areaText->text().toStdString());
    auto side = std::stof(sideText->text().toStdString());
    auto me = std::stof(maxErrorText->text().toStdString());
    uplowBounds res;

    try {
        res = sqr_calc_area(me, side, area);
        plainTextEdit->setPlainText(QString::fromStdString(std::string("UB: ") + std::to_string(res.s_upper) + std::string("\n LB: ") + std::to_string(res.s_lower)));
    } catch (std::invalid_argument error) {
        plainTextEdit->setPlainText(QString::fromStdString(error.what()));
        return;
    }
}
