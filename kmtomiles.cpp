#include "kmtomiles.h"
#include "ui_kmtomiles.h"

kmtoMiles::kmtoMiles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kmtoMiles)
{
    ui->setupUi(this);
}

kmtoMiles::~kmtoMiles()
{
    delete ui;
}
