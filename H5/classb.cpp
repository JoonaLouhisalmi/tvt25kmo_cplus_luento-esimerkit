#include "classb.h"

ClassB::ClassB(){}

string ClassB::getInfo() const
{
    return info;
}

void ClassB::setInfo(const string &newInfo)
{
    info = newInfo;
}
