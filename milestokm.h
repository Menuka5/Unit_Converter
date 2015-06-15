#ifndef MILESTOKM_H
#define MILESTOKM_H

#include <QDialog>

namespace Ui {
class milestokm;
}

class milestokm : public QDialog
{
    Q_OBJECT

public:
    explicit milestokm(QWidget *parent = 0);
    ~milestokm();

private:
    Ui::milestokm *ui;
};

#endif // MILESTOKM_H
