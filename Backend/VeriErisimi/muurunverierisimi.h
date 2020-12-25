#ifndef MUURUNVERIERISIMI_H
#define MUURUNVERIERISIMI_H

#include <QVector>
#include <memory>
#include "Backend/Veriler/muurun.h"

using namespace std;

class MUUrunVeriErisimi
{
public:
    MUUrunVeriErisimi();

    shared_ptr<MUUrun> urun();

private:
    shared_ptr<MUUrun> u_ptrUrun;
};

#endif // MUURUNVERIERISIMI_H
