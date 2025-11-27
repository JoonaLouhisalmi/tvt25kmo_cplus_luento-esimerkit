#include "wheel.h"

Wheel::Wheel() {
    size = 0;
    type = "";
}

Wheel::Wheel(int s, string t)
{
    size = s;
    type = t;
}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}
