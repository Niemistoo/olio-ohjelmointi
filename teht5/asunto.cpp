#include "asunto.h"

Asunto::Asunto()
{

}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukkaatAmount, int neliotAmount)
{
    asukasMaara = asukkaatAmount;
    neliot = neliotAmount;
    cout << "Alustetaan asunto: Asukkaita " << asukasMaara << "kpl. Koko " << neliot << "m^2" << endl;
}

double Asunto::laskeKulutus(double energiahinta)
{
    double laskettuHinta;
    laskettuHinta = energiahinta * asukasMaara * neliot;
    return laskettuHinta;
}
