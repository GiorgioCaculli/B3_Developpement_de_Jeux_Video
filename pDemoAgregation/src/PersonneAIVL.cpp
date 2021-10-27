#include "PersonneAIVL.hpp"

#include <sstream>

int PersonneAIVL::compteur = 0;

PersonneAIVL::PersonneAIVL( std::string nom, Residence residence )
: nom( nom )
, residence( residence )
{
    id = new int( ++compteur );
}

PersonneAIVL::~PersonneAIVL()
{
    delete id;
}

PersonneAIVL::PersonneAIVL( const PersonneAIVL &personneAIVL )
: nom( personneAIVL.nom )
, residence( personneAIVL.residence )
{
    id = new int( *( personneAIVL.id ) );
}

std::string PersonneAIVL::str() const
{
    std::stringstream ss;

    ss << "AIVL: " << "ID " << std::to_string( *id ) << " " << nom << " " << residence.str();

    return ss.str();
}
