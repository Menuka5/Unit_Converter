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

private:
    Ui::faratocen *ui;
};

#endif // FARATOCEN_H
