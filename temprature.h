#ifndef TEMPRATURE_H
#define TEMPRATURE_H
#include "keltocel.h"
#include "faratocen.h"
#include "celtokel.h"
#include "centofara.h"

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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Temprature *ui;
    centofara *funcentofara;
    faratocen *funfaratocen;
    KeltoCel *funkeltocel;
    celtokel *funceltokel;
};

#endif // TEMPRATURE_H
