#include "dolltosl.h"
#include "ui_dolltosl.h"
#include <string>
using namespace std;

dolltosl::dolltosl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dolltosl)
{
    ui->setupUi(this);
}

dolltosl::~dolltosl()
{
    delete ui;
}

void dolltosl::on_pushButton_2_clicked()
{
    close();
}

void dolltosl::on_pushButton_clicked()
{
    double a = ui->lineEdit->text().toDouble();
    a = a*133.99;
    ui->llbOrder->setText(QString::number(a));
}
