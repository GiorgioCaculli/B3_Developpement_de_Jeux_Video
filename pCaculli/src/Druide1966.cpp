#include "../include/Druide1966.hpp"

#include <sstream>

Druide1966::Druide1966( std::string nom1966, int vie1966, Position1966 position1966, int magie1966 )
: Personnage1966( nom1966, vie1966, position1966 )
, magie1966( magie1966 )
{
}

Druide1966::~Druide1966()
{
}

Druide1966::Druide1966(const Druide1966 &druide1966 )
: Personnage1966( druide1966.get_nom(), druide1966.get_vie(), druide1966.get_position() )
, magie1966( druide1966.magie1966 )
{
}

Druide1966& Druide1966::operator=(const Druide1966 &rhs1966 )
{
    if ( this != &rhs1966 )
    {
        Personnage1966::operator=( rhs1966 );
        magie1966 = rhs1966.magie1966;
    }
    return *this;
}

Druide1966 *Druide1966::clone() const
{
    return new Druide1966( get_nom(), get_vie(), get_position(), magie1966 );
}

std::string Druide1966::str() const
{
    std::stringstream ss1966;
    ss1966 << Personnage1966::str();
    return ss1966.str();
}

std::string Druide1966::getInfo() const
{
    std::stringstream ss1966;
    ss1966 << Personnage1966::getInfo() << "-" << std::to_string( magie1966 );
    return ss1966.str();
}
