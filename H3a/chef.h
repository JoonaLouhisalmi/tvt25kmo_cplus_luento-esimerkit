#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
private:
    string name;

public:
    Chef(string);
    ~Chef();

    string getName();

    void makeSalad();
    void makeSoup();

};

#endif // CHEF_H
