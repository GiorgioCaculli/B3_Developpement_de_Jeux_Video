#include "Polygone.hpp"

#include <sstream>

Polygone::Polygone()
: sommets( std::vector< Figure * >() )
{
}

Polygone::Polygone( const Polygone &polygone )
: Polygone()
{
}

Polygone::~Polygone()
{
    for( Figure *figure : sommets )
    {
        delete figure;
    }
    sommets.clear();
}

void Polygone::add( Figure *f )
{
    sommets.push_back( f->clone() );
}

std::string Polygone::str() const
{
    std::stringstream ss;
    for( Figure *figure : sommets )
    {
        ss << figure->str() << "\n";
    }
    return ss.str();
}

Polygone *Polygone::clone() const
{
    return new Polygone( *this );
}
