#include "muurunsatis.h"

MUUrunSatis::MUUrunSatis()
{

}

QString MUUrunSatis::getBarkod() const
{
    return u_strBarkod;
}

void MUUrunSatis::setBarkod(const QString &value)
{
    u_strBarkod = value;
}

QString MUUrunSatis::getMusteriKodu() const
{
    return u_strMusteriKodu;
}

void MUUrunSatis::setMusteriKodu(const QString &value)
{
    u_strMusteriKodu = value;
}

QString MUUrunSatis::getUrunSatis() const
{
    return u_strUrunSatis;
}

void MUUrunSatis::setUrunSatis(const QString &value)
{
    u_strUrunSatis = value;
}

QDate MUUrunSatis::getSatisTarihi() const
{
    return u_strSatisTarihi;
}

void MUUrunSatis::setSatisTarihi(const QDate &value)
{
    u_strSatisTarihi = value;
}

QString MUUrunSatis::getbirimfiyat() const
{
    return u_strbirimfiyat;
}

void MUUrunSatis::setbirimfiyat(const QString &value)
{
    u_strbirimfiyat = value;
}

double MUUrunSatis::getToplamfiyat() const
{
    return u_dToplamfiyat;
}

void MUUrunSatis::setToplamfiyat(double value)
{
    u_dToplamfiyat = value;
}
