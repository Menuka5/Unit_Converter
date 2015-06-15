#include "dolltosl.h"
#include "ui_dolltosl.h"

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
