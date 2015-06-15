#include "centofara.h"
#include "ui_centofara.h"

centofara::centofara(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::centofara)
{
    ui->setupUi(this);
}

centofara::~centofara()
{
    delete ui;
}
