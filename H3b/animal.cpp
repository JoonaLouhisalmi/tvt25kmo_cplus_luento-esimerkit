#include "animal.h"

Animal::Animal()
{
    cout << "Animal luotu" << endl;
}

Animal::~Animal()
{
    cout << "Animal tuhottu" << endl;
}

void Animal::callOut()
{
    cout << "Eläin ääntelee." << endl;
}
