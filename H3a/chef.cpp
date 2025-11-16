#include "chef.h"

Chef::Chef(string n)
{
    name = n;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

string Chef::getName()
{
    return name;
}

void Chef::makeSalad()
{
     cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}


