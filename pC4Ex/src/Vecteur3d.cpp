#include "Vecteur3d.hpp"

#include <iostream>

Vecteur3d::Vecteur3d( const int x, const int y, const int z )
: x( x )
, y( y )
, z( z )
{
}

Vecteur3d::Vecteur3d( const Vecteur3d &vecteur3d )
: x( vecteur3d.x )
, y( vecteur3d.y )
, z( vecteur3d.z )
{

}

Vecteur3d &Vecteur3d::operator=( const Vecteur3d &vecteur3d )
{
    if( &vecteur3d != this )
    {
        x = vecteur3d.x;
        y = vecteur3d.y;
        z = vecteur3d.z;
    }
    return *this;
}

Vecteur3d::~Vecteur3d()
{
}

std::ostream &operator<<( std::ostream &os, const Vecteur3d &vecteur3d )
{
    os << "X: " << vecteur3d.x << " Y: " << vecteur3d.y << " Z: " << vecteur3d.z;
    return os;
}

bool Vecteur3d::operator==( const Vecteur3d &vecteur3d ) const
{
    return x == vecteur3d.x && y == vecteur3d.y && z == vecteur3d.z;
}

bool operator!=( const Vecteur3d &vecteur3d1, const Vecteur3d &vecteur3d2 )
{
    return !( vecteur3d1 == vecteur3d2 );
}

Vecteur3d Vecteur3d::operator+( const Vecteur3d &vecteur3d ) const
{
    return Vecteur3d( x + vecteur3d.x, y + vecteur3d.y, z + vecteur3d.z );
}

float Vecteur3d::operator*( const Vecteur3d &vecteur3d ) const
{
    return x * vecteur3d.x + y * vecteur3d.y + z * vecteur3d.z;
}

int Vecteur3d::operator()( const int i ) const
{
    switch( i )
    {
    case( 1 ):
        return x;
    case( 2 ):
        return y;
    case( 3 ):
        return z;
    default:
        return 0;
    }
}

std::istream &operator>>( std::istream &is, Vecteur3d &vecteur3d )
{
    std::cout << "X: ";
    is >> vecteur3d.x;
    std::cout << "Y: ";
    is >> vecteur3d.y;
    std::cout << "Z: ";
    is >> vecteur3d.z;
    return is;
}
