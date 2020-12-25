#ifndef MUURUNBILGILERI_H
#define MUURUNBILGILERI_H

#include <QString>

class MUUrunBilgileri
{
public:
    MUUrunBilgileri();


    QString getBarkod() const;
    void setBarkod(const QString &value);

    QString getUrunAdi() const;
    void setUrunAdi(const QString &value);

    QString getOlcuBirimi() const;
    void setOlcuBirimi(const QString &value);

    QString getBirimfiyat() const;
    void setBirimfiyat(const QString &value);

private:
    QString u_strBarkod;
    QString u_strUrunAdi;
    QString u_strOlcuBirimi;
    QString u_strBirimfiyat;
};

#endif // MUURUNBILGILERI_H
