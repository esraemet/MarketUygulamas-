#include "mukurumsalmusteri.h"

MUKurumsalMusteri::MUKurumsalMusteri()
{

}

QString MUKurumsalMusteri::getVergiNo() const
{
    return u_strVergiNo;
}

void MUKurumsalMusteri::setVergiNo(const QString &value)
{
    u_strVergiNo = value;
}

QString MUKurumsalMusteri::getKurumAdi() const
{
    return u_strKurumAdi;
}

void MUKurumsalMusteri::setKurumAdi(const QString &value)
{
    u_strKurumAdi = value;
}

QString MUKurumsalMusteri::getSicilNo() const
{
    return u_strSicilNo;
}

void MUKurumsalMusteri::setSicilNo(const QString &value)
{
    u_strSicilNo = value;
}

QString MUKurumsalMusteri::getAdres() const
{
    return u_strAdres;
}

void MUKurumsalMusteri::setAdres(const QString &value)
{
    u_strAdres = value;
}

QString MUKurumsalMusteri::getTelefon() const
{
    return u_strTelefon;
}

void MUKurumsalMusteri::setTelefon(const QString &value)
{
    u_strTelefon = value;
}
