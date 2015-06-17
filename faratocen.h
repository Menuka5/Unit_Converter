#ifndef FARATOCEN_H
#define FARATOCEN_H

#include <QDialog>

namespace Ui {
class faratocen;
}

class faratocen : public QDialog
{
    Q_OBJECT

public:
    explicit faratocen(QWidget *parent = 0);
    ~faratocen();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::faratocen *ui;
};

#endif // FARATOCEN_H
