#include "Taxi.hpp"

Taxi::Taxi()
{
    //ctor
}

Taxi::~Taxi()
{
    //dtor
}

Taxi::Taxi(const Taxi& other)
{
    //copy ctor
}

Taxi& Taxi::operator=(const Taxi& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
