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

void milestokm::on_pushButton_2_clicked()
{
    close();
}

void milestokm::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a * 1.6;
    ui->label_3->setText(QString::number(a));
}
