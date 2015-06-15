#ifndef CURRENCY_H
#define CURRENCY_H
#include <QDialog>
#include "sltodoll.h"
#include "dolltosl.h"


namespace Ui {
class Currency;
}

class Currency : public QDialog
{
    Q_OBJECT

public:
    explicit Currency(QWidget *parent = 0);
    ~Currency();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Currency *ui;
    sltodoll *funsltodoll;
    dolltosl *fundolltosl;
};

#endif // CURRENCY_H
