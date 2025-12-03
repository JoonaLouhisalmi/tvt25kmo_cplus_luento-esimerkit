#include <iostream>
#include "classb.h"
#include "classa1.h"
#include "classa2.h"

using namespace std;

int main()
{
    // Osoitin- ja referenssiosuus
    int a = 5;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    int &refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    cout << endl;

    int b = 6;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    // Kokeile: voiko refA:n saada osoittamaan b:hen?
    // refA = b;  // Tämä EI muuta refA:n osoitetta, vaan kopioi b:n arvon a:han.
    // refA ei voi koskaan alkaa viitata b:hen, se viittaa aina a:han.

    // Kokeile: voiko pointerA:n osoittaa b:hen?
    pointerA = &b; // Nyt pointteri osoittaa b:hen
    cout << "Pointterin (pointerA) uusi osoite on: " << pointerA << endl;
    cout << "Pointterin (pointerA) osoittaman muistipaikan arvo on: " << *pointerA << endl;

    cout << endl;
    cout << "a:n arvo on nyt: " << a << " ja osoite on edelleen: " << &a << endl;
    cout << "refA viittaa yhä a:han, arvo: " << refA << ", osoite: " << &refA << endl;

    cout << endl;

    // Olioargumentti – kopio
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << endl;

    // Referenssi argumenttina
    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2 " << objA2.getBinfo() << endl;
    cout << endl;


    //TEKOÄLYN SELITYS

    /*
      Tästä näet:
      - ClassA1 sai kopion B-oliosta -> objB:n data ei muuttunut, kun objA1:stä muokattiin.
      - ClassA2 sai referenssin B-olioon -> kun objA2:sta muokataan, myös objB:n data muuttuu.
      - pointerA ja *pointerA ero:
          pointerA  = osoite
         *pointerA  = osoitteen takana oleva arvo
      - refA ja &refA ero:
          refA  = sama arvo kuin a:lla
         &refA = sama osoite kuin &a
    */

    return 0;
}
