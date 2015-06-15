#include "faratocen.h"
#include "ui_faratocen.h"

faratocen::faratocen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::faratocen)
{
    ui->setupUi(this);
}

faratocen::~faratocen()
{
    delete ui;
}
