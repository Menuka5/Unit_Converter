#include "centofara.h"
#include "ui_centofara.h"

centofara::centofara(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::centofara)
{
    ui->setupUi(this);
}

centofara::~centofara()
{
    delete ui;
}

void centofara::on_pushButton_2_clicked()
{
    close();
}

void centofara::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a*1.8 + 32;
    ui->label_3->setText(QString::number(a));
}
