#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car(string b, string m, int y);
    void printData() const;
};

#endif // CAR_H
