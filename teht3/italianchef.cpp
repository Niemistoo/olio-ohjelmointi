#include "italianchef.h"

ItalianChef::ItalianChef(string chefName, int amountOfWater, int amountOfFlour):Chef(chefName)
{
    water = amountOfWater;
    flour = amountOfFlour;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << getName() << " destructor" << endl;
}

string ItalianChef::getName()
{
    return Chef::name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " uses " << flour << " dl of flour" << endl;
    cout << "Chef " << getName() << " uses " << water << " dl of water" << endl;
}
