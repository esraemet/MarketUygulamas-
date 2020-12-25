#ifndef MUVERITABANI_H
#define MUVERITABANI_H

#include "VeriErisimi/muurunverierisimi.h"


class MUVeriTabani
{
public:
    static MUVeriTabani *getNesne();

    MUUrunVeriErisimi &getVeriErisim();

private:
    MUVeriTabani();

    static MUVeriTabani *u_ptrNesne;

    MUUrunVeriErisimi u_VeriErisim;

};

#endif // MUVERITABANI_H
