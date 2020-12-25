#ifndef MUURUNALIS_H
#define MUURUNALIS_H

#include <QString>
#include <QDate>


class MUUrunAlis
{
public:
    MUUrunAlis();

    QString getBarkod() const;
    void setBarkod(const QString &value);

    QString getMusteriKodu() const;
    void setMusteriKodu(const QString &value);

    QString getUrunAlis() const;
    void setUrunAlis(const QString &value);

    QDate getAlisTarihi() const;
    void setAlisTarihi(const QDate &value);

    QString getbirimfiyat() const;
    void setbirimfiyat(const QString &value);

    double getToplamfiyat() const;
    void setToplamfiyat(double value);

private:
    QString u_strBarkod;
    QString u_strMusteriKodu;
    QString u_strUrunAlis;
    QDate u_strAlisTarihi;
    QString u_strbirimfiyat;
    double u_dToplamfiyat;
};

#endif // MUURUNALIS_H
