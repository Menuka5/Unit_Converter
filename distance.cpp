#include "distance.h"
#include "ui_distance.h"

Distance::Distance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Distance)
{
    ui->setupUi(this);
}

Distance::~Distance()
{
    delete ui;
}
