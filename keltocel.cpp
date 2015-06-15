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
