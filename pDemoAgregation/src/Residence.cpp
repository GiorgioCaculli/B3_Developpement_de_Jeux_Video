#include "Residence.hpp"

#include <sstream>

int Residence::compteur = 1000;

Residence::Residence( std::string rue, std::string numero, std::string ville, int code_postal )
: rue( rue )
, numero( numero )
, ville( ville )
, code_postal( code_postal )
{
    id = new int( ++compteur );
}

Residence::Residence( const Residence &residence )
: rue( residence.rue )
, numero( residence.numero )
, ville( residence.ville )
, code_postal( residence.code_postal )
{
    id = new int( *( residence.id ) );
}

Residence::~Residence()
{
    delete id;
}

/*Residence::Residence &operator=(const Residence &residence)
{
}*/

std::string Residence::str() const
{
    std::stringstream ss;
    ss << "ID: " << std::to_string( *id ) << " " << rue << " " << numero << " " << ville << " " << std::to_string( code_postal );
    return ss.str();
}
