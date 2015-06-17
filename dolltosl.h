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

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::dolltosl *ui;
};

#endif // DOLLTOSL_H
