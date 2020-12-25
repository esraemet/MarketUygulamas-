#include "marketuygulamasi.h"
#include "ui_marketuygulamasi.h"

#include "Backend/muveritabani.h"
#include "FrontEnd/muurunbilgileriformu.h"



MarketUygulamasi::MarketUygulamasi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MarketUygulamasi){
    ui->setupUi(this);
}


MarketUygulamasi::~MarketUygulamasi() { delete ui; }


void MarketUygulamasi::on_pushButton_2_clicked()
{
    MUUrunBilgileriFormu form;
    form.exec();
}

