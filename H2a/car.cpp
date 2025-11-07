#include "car.h"
#include <iostream>



Car::Car() {}

Car::Car(string brand, string model, int yearModel)
{
    this->brand=brand;
    this->model=model;
    this->yearModel=yearModel;


}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

string Car::getBrand() const
{
    return brand;
}

string Car::getModel() const
{
    return model;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::printData() const
{
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}

