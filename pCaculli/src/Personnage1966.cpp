#include "../include/Personnage1966.hpp"

#include <sstream>

Personnage1966::Personnage1966( std::string nom1966, int vie1966, Position1966 position1966 )
: nom1966( nom1966 )
, vie1966( vie1966 )
, position1966( position1966 )
{
    //ctor
}

Personnage1966::~Personnage1966()
{
    //dtor
}

Personnage1966::Personnage1966( const Personnage1966 &personnage1966 )
: nom1966( personnage1966.nom1966 )
, vie1966( personnage1966.vie1966 )
, position1966( personnage1966.position1966 )
{
    //copy ctor
}

Personnage1966& Personnage1966::operator=( const Personnage1966 &rhs1966 )
{
    if ( this != &rhs1966 )
    {
        nom1966 = rhs1966.nom1966;
        vie1966 = rhs1966.vie1966;
        position1966 = rhs1966.position1966;
    }
    return *this;
}

bool Personnage1966::operator==( const Personnage1966 &rhs1966 ) const
{
    return nom1966 == rhs1966.nom1966;
}

bool Personnage1966::operator!=( const Personnage1966 &rhs1966 ) const
{
    return nom1966 != rhs1966.nom1966;
}

std::string Personnage1966::getInfo() const
{
    std::stringstream ss1966;
    ss1966 << nom1966[0] << "-" << std::to_string( vie1966 );
    return ss1966.str();
}

std::string Personnage1966::get_nom() const
{
    return nom1966;
}

int Personnage1966::get_vie() const
{
    return vie1966;
}

void Personnage1966::set_vie( const int vie )
{
    vie1966 = vie;
}

Position1966 Personnage1966::get_position() const
{
    return position1966;
}

void Personnage1966::set_position( const Position1966 &position )
{
    position1966 = position;
}

Personnage1966 *Personnage1966::clone() const
{
    return new Personnage1966( nom1966, vie1966, position1966 );
}

std::string Personnage1966::str() const
{
    std::stringstream ss;
    ss << nom1966 << ", " << vie1966 << ", " << position1966.str();
    return ss.str();
}
