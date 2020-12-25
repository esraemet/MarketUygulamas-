#include "muurunalis.h"

MUUrunAlis::MUUrunAlis()
{

}

QString MUUrunAlis::getBarkod() const
{
    return u_strBarkod;
}

void MUUrunAlis::setBarkod(const QString &value)
{
    u_strBarkod = value;
}

QString MUUrunAlis::getMusteriKodu() const
{
    return u_strMusteriKodu;
}

void MUUrunAlis::setMusteriKodu(const QString &value)
{
    u_strMusteriKodu = value;
}

QString MUUrunAlis::getUrunAlis() const
{
    return u_strUrunAlis;
}

void MUUrunAlis::setUrunAlis(const QString &value)
{
    u_strUrunAlis = value;
}

QDate MUUrunAlis::getAlisTarihi() const
{
    return u_strAlisTarihi;
}

void MUUrunAlis::setAlisTarihi(const QDate &value)
{
    u_strAlisTarihi = value;
}

QString MUUrunAlis::getbirimfiyat() const
{
    return u_strbirimfiyat;
}

void MUUrunAlis::setbirimfiyat(const QString &value)
{
    u_strbirimfiyat = value;
}

double MUUrunAlis::getToplamfiyat() const
{
    return u_dToplamfiyat;
}

void MUUrunAlis::setToplamfiyat(double value)
{
    u_dToplamfiyat = value;
}
