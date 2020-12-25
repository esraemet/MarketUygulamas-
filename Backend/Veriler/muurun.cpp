#include "muurun.h"

MUUrun::MUUrun()
{

}

QString MUUrun::getBarkod() const
{
    return u_strBarkod;
}

void MUUrun::setBarkod(const QString &value)
{
    u_strBarkod = value;
}

MUUrunBilgileri &MUUrun::getUrunBilgileri()
{
    return u_UrunBilgileri;
}

QVector<shared_ptr<MUUrunBilgileri> > &MUUrun::getU_Urunler()
{
    return u_Urunler;
}
