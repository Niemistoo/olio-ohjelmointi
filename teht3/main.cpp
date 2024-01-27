#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef chef2("Anthony Bourdain", 3, 2);
    chef2.makeSalad();
    chef2.makePasta();

    return 0;
}
