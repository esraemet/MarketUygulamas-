#include "muurunbilgileriformu.h"
#include "ui_muurunbilgileriformu.h"

#include "Backend/muveritabani.h"

MUUrunBilgileriFormu::MUUrunBilgileriFormu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MUUrunBilgileriFormu)
{
    ui->setupUi(this);
    auto urun = MUVeriTabani::getNesne()->getVeriErisim().urun();
    ui->lineEdit_2->setText(urun->getBarkod());
}

MUUrunBilgileriFormu::~MUUrunBilgileriFormu()
{
    delete ui;
}
