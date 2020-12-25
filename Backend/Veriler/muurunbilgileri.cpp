#include "muurunbilgileri.h"

MUUrunBilgileri::MUUrunBilgileri()
{

}

QString MUUrunBilgileri::getBarkod() const
{
    return u_strBarkod;
}

void MUUrunBilgileri::setBarkod(const QString &value)
{
    u_strBarkod = value;
}

QString MUUrunBilgileri::getUrunAdi() const
{
    return u_strUrunAdi;
}

void MUUrunBilgileri::setUrunAdi(const QString &value)
{
    u_strUrunAdi = value;
}

QString MUUrunBilgileri::getOlcuBirimi() const
{
    return u_strOlcuBirimi;
}

void MUUrunBilgileri::setOlcuBirimi(const QString &value)
{
    u_strOlcuBirimi = value;
}

QString MUUrunBilgileri::getBirimfiyat() const
{
    return u_strBirimfiyat;
}

void MUUrunBilgileri::setBirimfiyat(const QString &value)
{
    u_strBirimfiyat = value;
}
