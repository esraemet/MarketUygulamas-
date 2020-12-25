#ifndef MUURUNSATIS_H
#define MUURUNSATIS_H

#include <QString>
#include <QDate>


class MUUrunSatis
{
public:
    MUUrunSatis();

    QString getBarkod() const;
    void setBarkod(const QString &value);

    QString getMusteriKodu() const;
    void setMusteriKodu(const QString &value);

    QString getUrunSatis() const;
    void setUrunSatis(const QString &value);

    QDate getSatisTarihi() const;
    void setSatisTarihi(const QDate &value);

    QString getbirimfiyat() const;
    void setbirimfiyat(const QString &value);

    double getToplamfiyat() const;
    void setToplamfiyat(double value);

private:
    QString u_strBarkod;
    QString u_strMusteriKodu;
    QString u_strUrunSatis;
    QDate u_strSatisTarihi;
    QString u_strbirimfiyat;
    double u_dToplamfiyat;
};

#endif // MUURUNSATIS_H
