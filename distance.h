#ifndef DISTANCE_H
#define DISTANCE_H

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

private:
    Ui::Distance *ui;
};

#endif // DISTANCE_H
