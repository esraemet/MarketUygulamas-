#include "mumusteri.h"

MUMusteri::MUMusteri()
{

}

QString MUMusteri::getMusteriKodu() const
{
    return u_strMusteriKodu;
}

void MUMusteri::setMusteriKodu(const QString &value)
{
    u_strMusteriKodu = value;
}

QString MUMusteri::getAdi() const
{
    return u_strAdi;
}

void MUMusteri::setAdi(const QString &value)
{
    u_strAdi = value;
}

QString MUMusteri::getSoyAdi() const
{
    return u_strSoyAdi;
}

void MUMusteri::setSoyAdi(const QString &value)
{
    u_strSoyAdi = value;
}

QString MUMusteri::getTelefon() const
{
    return u_strTelefon;
}

void MUMusteri::setTelefon(const QString &value)
{
    u_strTelefon = value;
}

QString MUMusteri::getAdres() const
{
    return u_strAdres;
}

void MUMusteri::setAdres(const QString &value)
{
    u_strAdres = value;
}
