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
