#include "Personne.hpp"

#include <string>
#include <iostream>
#include <sstream>

Personne::Personne( std::string nom, std::string prenom, int age, Habitat adresse )
: nom( nom )
, prenom( prenom )
, age( age )
, adresse( adresse )
{
    compteur++;
    id = new int(compteur);
    /* *id = compteur */
}

Personne::Personne( const Personne &p )
: nom( p.nom )
, prenom( p.prenom )
, age( p.age )
, adresse( p.adresse )
{
    std::cout << "Constructeur de copie" << std::endl;
    compteur++;
    /* id = new int( *( p.id ) ); */
    this->id = new int( *( p.id ) );
}

Personne::~Personne()
{
    std::cout << "Appel destructeur" << std::endl;
    delete id;
}

std::string Personne::categorieAge() const
{
    if( age <= 20 )
    {
        return "Jeune";
    } else if ( age <= 50)
    {
        return "Moyen";
    }
    else
    {
        return "Age";
    }
}

std::string Personne::categorieResidence() const
{
    switch( adresse )
    {
        case Habitat::VILLE:
            return "Habitant urbain";
        case Habitat::VILLAGE:
            return "Villageois";
        case Habitat::CAMPAGNE:
            return "Habitant rural";
        default:
            return "Habitat urbain";
    }
}

std::string Personne::str() const
{
    std::stringstream ss;

    ss << "ID: " << std::to_string( *id ) << " Nom: " << nom << " Prenom: " << prenom <<" Age: " << categorieAge() << " Adresse: " << categorieResidence();

    return ss.str();
}
