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
