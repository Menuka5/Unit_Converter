#ifndef TEMPRATURE_H
#define TEMPRATURE_H

#include <QDialog>

namespace Ui {
class Temprature;
}

class Temprature : public QDialog
{
    Q_OBJECT

public:
    explicit Temprature(QWidget *parent = 0);
    ~Temprature();

private:
    Ui::Temprature *ui;
};

#endif // TEMPRATURE_H
