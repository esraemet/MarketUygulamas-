#include "muurunformu.h"
#include "ui_muurunformu.h"

MUUrunFormu::MUUrunFormu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MUUrunFormu)
{
    ui->setupUi(this);
}

MUUrunFormu::~MUUrunFormu()
{
    delete ui;
}
