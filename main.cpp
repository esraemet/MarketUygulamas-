#include "marketuygulamasi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MarketUygulamasi w;
    w.show();

    return a.exec();
}
