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

void faratocen::on_pushButton_2_clicked()
{
    close();
}

void faratocen::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = (a - 32)/1.8;
    ui->label_3->setText(QString::number(a));
}
