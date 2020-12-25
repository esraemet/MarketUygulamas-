#include "muurunverierisimi.h"

MUUrunVeriErisimi::MUUrunVeriErisimi() {}

shared_ptr<MUUrun> MUUrunVeriErisimi::urun()
{
    if(u_ptrUrun.get() == nullptr); {
        u_ptrUrun = make_shared<MUUrun>();
    }
   return u_ptrUrun;
}

