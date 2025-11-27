#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
using namespace std;

class Car
{
public:
    Car();
    Car(string brand, string model);

    string getBrand() const;
    void setBrand(string b);

    string getModel() const;
    void setModel(string m);

    void setEngine();
    void setWheels();

    void printDetails();

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

    string model;
    string brand;
};

#endif // CAR_H
