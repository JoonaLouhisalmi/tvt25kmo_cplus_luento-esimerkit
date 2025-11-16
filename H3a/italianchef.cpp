#include "italianchef.h"

ItalianChef::ItalianChef(string n): Chef(n)
{
   cout << "ItalianChef " << getName() << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}

string ItalianChef::getName()
{
    return Chef::getName();
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << getName() << " makes pasta" << endl;
}
