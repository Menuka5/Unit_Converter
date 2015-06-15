#ifndef KMTOMILES_H
#define KMTOMILES_H

#include <QDialog>

namespace Ui {
class kmtoMiles;
}

class kmtoMiles : public QDialog
{
    Q_OBJECT

public:
    explicit kmtoMiles(QWidget *parent = 0);
    ~kmtoMiles();

private:
    Ui::kmtoMiles *ui;
};

#endif // KMTOMILES_H
