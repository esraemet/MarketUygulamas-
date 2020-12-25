#include "muveritabani.h"

MUVeriTabani *MUVeriTabani::u_ptrNesne=nullptr;

MUVeriTabani::MUVeriTabani()
{

}

MUUrunVeriErisimi &MUVeriTabani::getVeriErisim()
{
    return u_VeriErisim;
}

MUVeriTabani *MUVeriTabani::getNesne() {
    if (u_ptrNesne == nullptr) {
        u_ptrNesne = new MUVeriTabani;
    }
    return u_ptrNesne;
}
