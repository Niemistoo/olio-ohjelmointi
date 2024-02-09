#include "kerros.h"

Kerros::Kerros()
{

}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    cout << "Kerros tuhottu" << endl;
}

void Kerros::maaritaAsunnot()
{
    as1 -> maarita(2, 100);
    as2 -> maarita(2, 100);
    as3 -> maarita(2, 100);
    as4 -> maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double laskettuHinta;
    laskettuHinta = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) +as4 ->laskeKulutus(hinta);
    return laskettuHinta;
}
