#ifndef KELTOCEL_H
#define KELTOCEL_H

#include <QDialog>

namespace Ui {
class KeltoCel;
}

class KeltoCel : public QDialog
{
    Q_OBJECT

public:
    explicit KeltoCel(QWidget *parent = 0);
    ~KeltoCel();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::KeltoCel *ui;
};

#endif // KELTOCEL_H
