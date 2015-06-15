#ifndef DISTANCE_H
#define DISTANCE_H
#include "milestokm.h"
#include "kmtomiles.h"

#include <QDialog>

namespace Ui {
class Distance;
}

class Distance : public QDialog
{
    Q_OBJECT

public:
    explicit Distance(QWidget *parent = 0);
    ~Distance();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Distance *ui;
    kmtoMiles *funkmtomile;
    milestokm *funmilestokm;

};

#endif // DISTANCE_H
