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



void Distance::on_pushButton_clicked()
{
    funmilestokm = new milestokm(this);
    funmilestokm->show();
}


void Distance::on_pushButton_2_clicked()
{
    funkmtomile = new kmtoMiles(this);
    funkmtomile->show();
}
