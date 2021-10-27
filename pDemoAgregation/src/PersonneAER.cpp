#include "PersonneAER.hpp"

#include <sstream>

int PersonneAER::compteur = 0;

PersonneAER::PersonneAER( std::string nom, Residence &residence )
: nom( nom )
, residence( residence ) /* Liste d'initialisation necessaire */
{
    id = new int( ++compteur );
}

PersonneAER::~PersonneAER()
{
    delete id;
}

PersonneAER::PersonneAER( const PersonneAER &personneAER )
: nom( personneAER.nom )
, residence( personneAER.residence )
{
    id = new int( *( personneAER.id ) );
}

std::string PersonneAER::str() const
{
    std::stringstream ss;
    ss << "AER: " << "ID " << std::to_string( *id ) << " " << nom << " " << residence.str();
    return ss.str();
}
