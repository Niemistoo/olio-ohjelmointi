#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    k1->maaritaAsunnot();
    k2->maaritaAsunnot();
    k3->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete k1;
    delete k2;
    delete k3;
    cout << "Kerrostalo tuhottu" << endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double laskettuKulutus;
    laskettuKulutus = k1->Katutaso::laskeKulutus(hinta) + k2->Kerros::laskeKulutus(hinta) + k3->Kerros::laskeKulutus(hinta);
    return laskettuKulutus;
}
