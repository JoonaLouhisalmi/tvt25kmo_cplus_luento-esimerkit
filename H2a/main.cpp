#include <iostream>
#include <memory>
#include "student.h"
#include "car.h"
#include "rectangle.h"

using namespace std;

int main() {

    Car car1("Volvo", "V70", 2015);
    car1.printData();

    cout << endl;


    Rectangle *objectRect = new Rectangle();
    objectRect->setWidth(5.5);
    objectRect->setHeight(3.2);

    cout << "Suorakulmion pinta-ala: " << objectRect->getArea() << endl;
    cout << "Suorakulmion ympärysmitta: " << objectRect->getCircum() << endl;

    // Tuhoa olio
    delete objectRect;
    objectRect = nullptr;

    cout << endl;



    unique_ptr<Student> studentPtr = make_unique<Student>();

    studentPtr->setName("Aino Virtanen");
    studentPtr->setStudentNumber(12345);
    studentPtr->setAverage(4.25);

    cout << "Opiskelijan tiedot:" << endl;
    studentPtr->printData();

    return 0;
}
