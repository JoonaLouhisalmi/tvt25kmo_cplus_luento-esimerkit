#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    Car();
    Car(string b, string m, int y);


    void setBrand(const string &newBrand);
    void setModel(const string &newModel);
    void setYearModel(int newYearModel);


    string getBrand() const;
    string getModel() const;
    int getYearModel() const;


    void printData() const;

};

#endif
