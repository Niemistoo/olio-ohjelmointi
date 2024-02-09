#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"


class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();

    double laskeKulutus(double);
private:
    Katutaso *k1 = new Katutaso;
    Kerros *k2 = new Kerros;
    Kerros *k3 = new Kerros;
};

#endif // KERROSTALO_H
