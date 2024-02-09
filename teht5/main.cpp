#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main(){

    Kerrostalo *KT = new Kerrostalo;
    cout << "Kerrostalon kokonaiskulutus, kun hinta on 1: ";
    cout << KT->laskeKulutus(1) << endl;

    delete KT;

    return 0;
}
