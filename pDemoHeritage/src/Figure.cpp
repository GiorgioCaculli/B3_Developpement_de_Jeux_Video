#include "Figure.hpp"

Figure::Figure()
{
    //ctor
}

Figure::Figure( const Figure &figure )
{
}

Figure &Figure::operator=( const Figure &figure )
{
    if( &figure != this )
    {
    }
    return *this;
}

Figure::~Figure()
{
    //dtor
}
