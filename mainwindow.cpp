#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    disdiag = new Distance(this);
    disdiag->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    tempdiag = new Temprature(this);
    tempdiag->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    currdiag = new Currency(this);
    currdiag->show();
}
