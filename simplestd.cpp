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

