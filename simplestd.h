#ifndef SIMPLESTD_H
#define SIMPLESTD_H

#include <QMainWindow>
#include <QDoubleValidator>
#include<cmath>

QT_BEGIN_NAMESPACE
namespace Ui { class SimpleSTD; }
QT_END_NAMESPACE

class SimpleSTD : public QMainWindow
{
    Q_OBJECT

public:
    SimpleSTD(QWidget *parent = nullptr);
    ~SimpleSTD();

private slots:
    void on_calcButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SimpleSTD *ui;
    double number1, number2;
};
#endif // SIMPLESTD_H
