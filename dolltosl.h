#ifndef DOLLTOSL_H
#define DOLLTOSL_H

#include <QDialog>

namespace Ui {
class dolltosl;
}

class dolltosl : public QDialog
{
    Q_OBJECT

public:
    explicit dolltosl(QWidget *parent = 0);
    ~dolltosl();

private:
    Ui::dolltosl *ui;
};

#endif // DOLLTOSL_H
