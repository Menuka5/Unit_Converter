#ifndef CURRENCY_H
#define CURRENCY_H

#include <QDialog>

namespace Ui {
class Currency;
}

class Currency : public QDialog
{
    Q_OBJECT

public:
    explicit Currency(QWidget *parent = 0);
    ~Currency();

private:
    Ui::Currency *ui;
};

#endif // CURRENCY_H
