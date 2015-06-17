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

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::sltodoll *ui;
};

#endif // SLTODOLL_H
