#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student();
    Student(string n, int num, double avg); // parametrillinen rakentaja
    ~Student();


    void setName(const string &newName);
    void setStudentNumber(int newNumber);
    void setAverage(double newAverage);


    string getName() const;
    int getStudentNumber() const;
    double getAverage() const;


    void printData() const;

private:
    string name;
    int studentNumber;
    double average;
};

#endif // STUDENT_H
