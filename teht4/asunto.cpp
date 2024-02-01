#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukkaita, int nelioita)
{
    Asunto::asukasMaara = asukkaita;
    Asunto::neliot = nelioita;

    cout << "Asunto maaritetty, asukkaita = " << asukasMaara << ", nelioita = " << nelioita << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    int kulutus = asukasMaara * neliot;
    return kulutus * hinta;
}
