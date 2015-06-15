#ifndef CELTOKEL_H
#define CELTOKEL_H

#include <QDialog>

namespace Ui {
class celtokel;
}

class celtokel : public QDialog
{
    Q_OBJECT

public:
    explicit celtokel(QWidget *parent = 0);
    ~celtokel();

private:
    Ui::celtokel *ui;
};

#endif // CELTOKEL_H
