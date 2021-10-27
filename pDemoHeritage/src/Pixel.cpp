#include "Pixel.hpp"

#include <sstream>

Pixel::Pixel( float x, float y, std::string color )
: Point( x, y )
, _color( color )
{
    //ctor
}

Pixel::Pixel( const Pixel &pixel )
: Point( pixel )
, _color( pixel._color )
{
}

Pixel &Pixel::operator=( const Pixel &pixel )
{
    if( &pixel != this )
    {
        Point::operator=( pixel );
        _color = pixel._color;
    }
    return *this;
}

Pixel::~Pixel()
{
    //dtor
}

std::string Pixel::str() const
{
    std::stringstream ss;

    ss << Point::str() << " Color: " << _color;

    return ss.str();
}

Pixel *Pixel::clone() const
{
    return new Pixel( *this );
}

bool Pixel::operator==( const Pixel &pixel ) const
{
    return Point::operator==( pixel ) && _color == pixel._color;
}
