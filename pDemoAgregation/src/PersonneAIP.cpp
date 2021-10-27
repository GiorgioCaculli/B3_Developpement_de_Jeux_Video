#include "PersonneAIP.hpp"

#include <sstream>

int PersonneAIP::compteur = 0;

PersonneAIP::PersonneAIP( std::string nom, Residence residence )
: nom( nom )
, residence( new Residence( residence ) )
{
    id = new int( ++compteur );
}

PersonneAIP::~PersonneAIP()
{
    delete id;
    delete residence;
}

PersonneAIP::PersonneAIP( const PersonneAIP &personneAIP )
: nom( personneAIP.nom )
, residence( new Residence( *( personneAIP.residence ) ) )
{
    id = new int( *( personneAIP.id ) );
}

std::string PersonneAIP::str() const
{
    std::stringstream ss;

    ss << "AIP: " << "ID " << std::to_string( *id ) << " " << nom << " " << residence->str();

    return ss.str();
}
