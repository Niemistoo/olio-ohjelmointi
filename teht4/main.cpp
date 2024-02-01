#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    /*
    //Tehtävän osa 1
    Asunto asunto1;
    asunto1.maarita(2, 100);
    asunto1.laskeKulutus(1);
    */

    /*
    //Tehtävän osa 2
    Katutaso kt1;
    kt1.maaritaAsunnot();

    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on ";
    cout << kt1.laskeKulutus(1) << endl;
    */

    //Tehtävän osa 3
    Kerrostalo kt;
    cout << "Kerrostalon kokonaiskulutus = " << kt.laskeKulutus(1) << endl;
}
