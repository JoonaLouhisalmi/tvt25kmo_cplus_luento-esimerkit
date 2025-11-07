#include "rectangle.h"

Rectangle::Rectangle() {}
Rectangle::Rectangle(double w, double h)
{
    width = w;
    height = h;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getCircum() const
{
    return 2 * (width + height);
}

Rectangle::~Rectangle() {
    cout<<"Olio tuhottiin!"<<endl;
}


