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

void kmtoMiles::on_pushButton_clicked()
{
    double a = ui->txtBox->text().toDouble();
    a = a / 1.6;
    ui->label_3->setText(QString::number(a));
}

void kmtoMiles::on_pushButton_2_clicked()
{
    close();
}
