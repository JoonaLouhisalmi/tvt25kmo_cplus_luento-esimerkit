#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(double w, double h);
    ~Rectangle();

    void setWidth(double newWidth);
    void setHeight(double newHeight);

    double getWidth() const;
    double getHeight() const;

    double getArea() const;
    double getCircum() const;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
