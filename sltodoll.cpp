#include "sltodoll.h"
#include "ui_sltodoll.h"

sltodoll::sltodoll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sltodoll)
{
    ui->setupUi(this);
}

sltodoll::~sltodoll()
{
    delete ui;
}

void sltodoll::on_pushButton_2_clicked()
{
    close();
}

void sltodoll::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a/133.99;
    ui->label_3->setText(QString::number(a));
}
