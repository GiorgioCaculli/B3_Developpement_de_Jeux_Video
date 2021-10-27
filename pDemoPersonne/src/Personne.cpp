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
