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
