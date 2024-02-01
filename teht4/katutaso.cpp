#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);

    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    Kerros::as1.maarita(2,100);
    Kerros::as2.maarita(2,100);
    Kerros::as3.maarita(2,100);
    Kerros::as4.maarita(2,100);

}

double Katutaso::laskeKulutus(double hinta)
{
    int kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
    kulutus += Kerros::as1.laskeKulutus(hinta) + Kerros::as2.laskeKulutus(hinta) + Kerros::as3.laskeKulutus(hinta) + Kerros::as4.laskeKulutus(hinta);
    return kulutus;
}
