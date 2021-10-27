#include "Personne.hpp"

#include <iostream>

int Personne::compteur = 1000;

Personne::Personne()
: Personne( "Giorgio" )
{
}

Personne::Personne( std::string nom )
: Personne( nom, 18 )
{
}

Personne::Personne( std::string nom, const int age )
{
    this->nom = nom;
    this->age = age;
}

Personne::~Personne()
{
    std::cout << "Appel destructeur" << std::endl;
};

std::string Personne::get_nom() const /* :: = Operateur de resolution de portee */
{
    return nom;
}

int Personne::get_age() const
{
    return age;
}

int Personne::get_compteur()
{
    return compteur;
}

std::ostream &operator<<( std::ostream &os, const Personne &personne )
{
    os << "Nom: " << personne.nom << " Age: " << std::to_string( personne.age );
    return os;
}

std::istream &operator>>( std::istream &is, Personne &personne )
{
    std::cout << "Nom: ";
    is >> personne.nom;
    std::cout << "Age: ";
    is >> personne.age;
    return is;
}
