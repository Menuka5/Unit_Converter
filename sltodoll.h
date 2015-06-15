#ifndef SLTODOLL_H
#define SLTODOLL_H

#include <QDialog>

namespace Ui {
class sltodoll;
}

class sltodoll : public QDialog
{
    Q_OBJECT

public:
    explicit sltodoll(QWidget *parent = 0);
    ~sltodoll();

private:
    Ui::sltodoll *ui;
};

#endif // SLTODOLL_H
