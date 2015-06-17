#include "keltocel.h"
#include "ui_keltocel.h"

KeltoCel::KeltoCel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeltoCel)
{
    ui->setupUi(this);
}

KeltoCel::~KeltoCel()
{
    delete ui;
}

void KeltoCel::on_pushButton_2_clicked()
{
    close();
}

void KeltoCel::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a - 273.15;
    ui->label_3->setText(QString::number(a));
}
