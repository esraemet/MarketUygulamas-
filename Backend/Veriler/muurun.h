#ifndef MUURUN_H
#define MUURUN_H

#include <QString>
#include <QVector>
#include <memory>
#include "muurunbilgileri.h"

using namespace std;

class MUUrun
{
public:
    MUUrun();

    QString getBarkod() const;
    void setBarkod(const QString &value);

    MUUrunBilgileri& getUrunBilgileri();

    QVector<shared_ptr<MUUrunBilgileri> >& getU_Urunler();

private:
    QString u_strBarkod;
    MUUrunBilgileri u_UrunBilgileri;

    QVector<shared_ptr<MUUrunBilgileri>> u_Urunler;

    friend class MUUrunVeriErisimi;

};

#endif // MUURUN_H
