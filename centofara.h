#ifndef CENTOFARA_H
#define CENTOFARA_H

#include <QDialog>

namespace Ui {
class centofara;
}

class centofara : public QDialog
{
    Q_OBJECT

public:
    explicit centofara(QWidget *parent = 0);
    ~centofara();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::centofara *ui;
};

#endif // CENTOFARA_H
