#include "milestokm.h"
#include "ui_milestokm.h"

milestokm::milestokm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::milestokm)
{
    ui->setupUi(this);
}

milestokm::~milestokm()
{
    delete ui;
}
