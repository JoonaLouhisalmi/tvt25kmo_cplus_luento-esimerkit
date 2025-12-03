#ifndef CLASSA2_H
#define CLASSA2_H

#include <iostream>
#include "classb.h"
using namespace std;

class ClassA2
{
private:
    ClassB &refB;

public:
    ClassA2(ClassB &);   // Annetaan argumenttina B-luokan olion osoite (referenssi)
    string getBinfo();
    void setBinfo(string);
};

#endif // CLASSA2_H
