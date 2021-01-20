#include "simplestd.h"
#include "ui_simplestd.h"

SimpleSTD::SimpleSTD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimpleSTD)
{
    ui->setupUi(this);
    ui->lineEditNumber1->setValidator (new QDoubleValidator (this));
    ui->lineEditNumber2->setValidator (new QDoubleValidator (this));
    connect (ui->lineEditNumber1, &QLineEdit::textChanged, [&] () emit { number1 = ui->lineEditNumber1->text().toDouble(); });
    connect (ui->lineEditNumber2, &QLineEdit::textChanged, [&] () emit { number2 = ui->lineEditNumber2->text().toDouble(); });
}

SimpleSTD::~SimpleSTD()
{
    delete ui;
}


void SimpleSTD::on_calcButton_clicked()
{
    auto sum = number1 + number2;
    auto mean = sum / 2;
    auto variance =  (pow ((number1-mean), 2.0) + pow ((number2-mean), 2.0)) / 2;
    auto standardDeviation = sqrt (variance);
    ui->lineEditMean->setText(QString::number(mean));
    ui->lineEditVariance->setText(QString::number(variance));
    ui->lineEditStandardDeviation->setText(QString::number(standardDeviation));
}

void SimpleSTD::on_pushButton_2_clicked()
{
    QApplication::quit();
}
