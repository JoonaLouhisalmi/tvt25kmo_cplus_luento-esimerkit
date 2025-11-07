#include "student.h"

Student::Student() {}

Student::Student(string n, int num, double avg)
{
    name = n;
    studentNumber = num;
    average = avg;
}

Student::~Student()
{
    cout << "Olio tuhottiin!" << endl;
}


void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setStudentNumber(int newNumber)
{
    studentNumber = newNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}


string Student::getName() const
{
    return name;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

double Student::getAverage() const
{
    return average;
}


void Student::printData() const
{
    cout << "Opiskelijan nimi: " << name << endl;
    cout << "Opiskelijanumero: " << studentNumber << endl;
    cout << "Keskiarvo: " << average << endl;
}
