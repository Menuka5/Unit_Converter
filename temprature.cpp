#include "temprature.h"
#include "ui_temprature.h"

Temprature::Temprature(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Temprature)
{
    ui->setupUi(this);
}

Temprature::~Temprature()
{
    delete ui;
}

void Temprature::on_pushButton_clicked()
{
    funcentofara = new centofara(this);
    funcentofara->show();
}

void Temprature::on_pushButton_2_clicked()
{
    funfaratocen = new faratocen(this);
    funfaratocen->show();
}

void Temprature::on_pushButton_3_clicked()
{
    funceltokel = new celtokel(this);
    funceltokel->show();
}

void Temprature::on_pushButton_4_clicked()
{
    funkeltocel = new KeltoCel(this);
    funkeltocel->show();
}
