#include "katutaso.h"

Katutaso::Katutaso()
{

}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    as1 -> maarita(2, 100);
    as2 -> maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double laskettuHinta;
    laskettuHinta = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);
    return laskettuHinta;
}
