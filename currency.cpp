#include "currency.h"
#include "ui_currency.h"

Currency::Currency(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Currency)
{
    ui->setupUi(this);
}

Currency::~Currency()
{
    delete ui;
}

void Currency::on_pushButton_clicked()
{
    fundolltosl = new dolltosl(this);
    fundolltosl->show();
}

void Currency::on_pushButton_2_clicked()
{
    funsltodoll = new sltodoll(this);
    funsltodoll->show();
}
