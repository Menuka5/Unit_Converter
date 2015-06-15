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

private:
    Ui::centofara *ui;
};

#endif // CENTOFARA_H
