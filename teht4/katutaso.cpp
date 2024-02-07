#include "katutaso.h"

Katutaso::Katutaso()
{
    //cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta)
{
    int kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
    return kulutus;
}
