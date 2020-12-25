#ifndef MUMUSTERI_H
#define MUMUSTERI_H

#include <QString>

class MUMusteri
{
public:
    MUMusteri();

    QString getMusteriKodu() const;
    void setMusteriKodu(const QString &value);

    QString getAdi() const;
    void setAdi(const QString &value);

    QString getSoyAdi() const;
    void setSoyAdi(const QString &value);

    QString getTelefon() const;
    void setTelefon(const QString &value);

    QString getAdres() const;
    void setAdres(const QString &value);

private:
    QString u_strMusteriKodu;
    QString u_strAdi;
    QString u_strSoyAdi;
    QString u_strTelefon;
    QString u_strAdres;

};

#endif // MUMUSTERI_H
