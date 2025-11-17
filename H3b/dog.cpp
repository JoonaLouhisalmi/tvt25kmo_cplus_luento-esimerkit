#include "dog.h"

Dog::Dog()
{
    cout << "Dog luotu" << endl;
}

Dog::~Dog()
{
    cout << "Dog tuhottu" << endl;
}

void Dog::callOut()
{
    cout << "Koira haukkuu!" << endl;
}
