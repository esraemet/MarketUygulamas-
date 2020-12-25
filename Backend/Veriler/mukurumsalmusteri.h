#ifndef MUKURUMSALMUSTERI_H
#define MUKURUMSALMUSTERI_H


#include "mumusteri.h"
#include "QString"



class MUKurumsalMusteri
{
public:
    MUKurumsalMusteri();

    QString getVergiNo() const;
    void setVergiNo(const QString &value);

    QString getKurumAdi() const;
    void setKurumAdi(const QString &value);

    QString getSicilNo() const;
    void setSicilNo(const QString &value);

    QString getAdres() const;
    void setAdres(const QString &value);

    QString getTelefon() const;
    void setTelefon(const QString &value);

private:
    QString u_strVergiNo;
    QString u_strKurumAdi;
    QString u_strSicilNo;
    QString u_strAdres;
    QString u_strTelefon;
};

#endif // MUKURUMSALMUSTERI_H
