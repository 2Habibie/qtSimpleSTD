#ifndef SIMPLESTD_H
#define SIMPLESTD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SimpleSTD; }
QT_END_NAMESPACE

class SimpleSTD : public QMainWindow
{
    Q_OBJECT

public:
    SimpleSTD(QWidget *parent = nullptr);
    ~SimpleSTD();

private:
    Ui::SimpleSTD *ui;
};
#endif // SIMPLESTD_H
