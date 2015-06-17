#include "celtokel.h"
#include "ui_celtokel.h"

celtokel::celtokel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::celtokel)
{
    ui->setupUi(this);
}

celtokel::~celtokel()
{
    delete ui;
}

void celtokel::on_pushButton_2_clicked()
{
    close();
}

void celtokel::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a + 273.15;
    ui->label_3->setText(QString::number(a));
}
