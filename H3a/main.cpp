#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
   {
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();
   }
    cout << endl;

   {
    ItalianChef chef2("Anthony Bourdain");


    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
    cout << "Name of Italian Chef is " << chef2.getName() << endl;
   }

   return 0;
}
