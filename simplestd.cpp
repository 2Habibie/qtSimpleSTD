#include "simplestd.h"
#include "ui_simplestd.h"

SimpleSTD::SimpleSTD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimpleSTD)
{
    ui->setupUi(this);
}

SimpleSTD::~SimpleSTD()
{
    delete ui;
}


void SimpleSTD::on_calcButton_clicked()
{

}

void SimpleSTD::on_pushButton_2_clicked()
{

}
