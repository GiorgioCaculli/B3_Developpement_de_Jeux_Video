#include "Point.hpp"

#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>

int Point::nb_points = 0;

Point::Point( float x, float y )
: x( x )
, y( y )
{
    nb_points++;
    id = new int( nb_points );
}

Point::Point( const Point &p )
: x( p.x )
, y( p.y )
{
    id = new int( *( p.id ) );
}

Point &Point::operator=( const Point &point )
{
    if( &point != this )
    {
        delete id;
        x = point.x;
        y = point.y;
        id = new int( *point.id );
    }
    return *this;
}

Point::~Point()
{
    std::cout << "Suppressions: " << str() << std::endl;
    delete id;
}

float Point::get_x() const
{
    return x;
}

float Point::get_y() const
{
    return y;
}

void Point::translate_p( float x, float y )
{
    this->x += x;
    this->y += y;
}

void Point::rotation( float deg )
{
    float rad = deg * ( M_PI / 180. );
    float x_cord = ( x * std::cos( rad ) ) - ( y * std::sin( rad ) );
    float y_cord = ( x * std::sin( rad ) ) + ( y * std::cos( rad ) );
    this->x = x_cord;
    this->y = y_cord;
}

int Point::combien_points()
{
    return nb_points;
}

float Point::distance( const Point &p1, const Point &p2 )
{
    return std::sqrt( std::pow( p2.x - p1.x , 2 ) + std::pow( p2.y - p1.y , 2 ) );
}

std::string Point::str() const
{
    std::stringstream ss;
    ss << "Point ID: " << std::to_string( *id );
    ss << " X: " << std::to_string( x );
    ss << " Y: " << std::to_string( y );
    return ss.str();
}

bool coincide( Point p1, Point p2 )
{
    return p1.x == p2.x && p1.y == p2.y;
}

Point Point::operator+( const Point &point ) const
{
    return Point( x + point.x, y + point.y );
}

Point Point::operator+( const float translation ) const
{
    return Point( x + translation, y + translation );
}

float Point::operator*( const Point &point ) const
{
    return x * point.x + y * point.y;
}

bool Point::operator==( const Point &point ) const
{
    return x == point.x && y == point.y;
}

float Point::operator()( const int i ) const
{
    switch( i )
    {
    case( 1 ):
        return x;
    case( 2 ):
        return y;
    default:
        return 0;
    }
}

std::ostream &operator<<( std::ostream &os, const Point &point )
{
    os << "X: " << point.x << " Y: " << point.y;
    return os;
}

std::istream &operator>>( std::istream &is, Point &point )
{
    return is;
}
