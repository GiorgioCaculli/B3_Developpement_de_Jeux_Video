#include "PersonneAEP.hpp"

#include <sstream>

int PersonneAEP::compteur = 0;

PersonneAEP::PersonneAEP( std::string nom, Residence *residence )
: nom( nom )
, residence( residence )
{
    id = new int( ++compteur );
}

PersonneAEP::PersonneAEP( std::string nom, Residence &residence )
: nom( nom )
, residence( &residence )
{
    id = new int( ++compteur );
}

PersonneAEP::~PersonneAEP()
{
    delete id;
}

PersonneAEP::PersonneAEP( const PersonneAEP &personneAEP )
: nom( personneAEP.nom )
, residence( personneAEP.residence )
{
    id = new int( *( personneAEP.id ) );
}

std::string PersonneAEP::str() const
{
    std::stringstream ss;
    ss << "AEP: " << "ID " << std::to_string( *id ) << " " << nom << " " << residence->str();
    return ss.str();
}
