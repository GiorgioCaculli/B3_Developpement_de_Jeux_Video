#include "../include/Position1966.hpp"

#include <sstream>

Position1966::Position1966( int x1966, int y1966 )
: x1966( x1966 )
, y1966( y1966 )
{
}

Position1966::~Position1966()
{
}

Position1966::Position1966( const Position1966 &position1966 )
: x1966( position1966.x1966 )
, y1966( position1966.y1966 )
{
}

Position1966 &Position1966::operator=( const Position1966 &rhs1966 )
{
    if (this != &rhs1966)
    {
        x1966 = rhs1966.x1966;
        y1966 = rhs1966.y1966;
    }
    return *this;
}

std::string Position1966::str() const
{
    std::stringstream ss;
    ss << "(" << std::to_string( x1966 ) << "," << std::to_string( y1966 ) << ")";
    return ss.str();
}

bool Position1966::operator==( const Position1966 &rhs1966 ) const
{
    return x1966 == rhs1966.x1966 && y1966 == rhs1966.y1966;
}

int Position1966::get_x() const
{
    return x1966;
}

void Position1966::set_x( const int x )
{
    x1966 = x;
}

int Position1966::get_y() const
{
    return y1966;
}

void Position1966::set_y( const int y )
{
    y1966 = y;
}
