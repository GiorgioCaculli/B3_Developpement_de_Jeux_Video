#include "Employe.hpp"

#include <sstream>

Employe::Employe( std::string prenom, std::string nom, std::string numero_securite_national )
: _prenom( prenom )
, _nom( nom )
, _numero_securite_national( numero_securite_national )
{
}

Employe::Employe( const Employe &employe )
: Employe( employe._prenom, employe._nom, employe._numero_securite_national )
{
}

Employe &Employe::operator=( const Employe &employe )
{
    if( &employe != this )
    {
        _prenom = employe._prenom;
        _nom = employe._nom;
    }
    return *this;
}

std::string Employe::get_prenom() const
{
    return _prenom;
}

void Employe::set_prenom( const std::string prenom )
{
    _prenom = prenom;
}

std::string Employe::get_nom() const
{
    return _nom;
}

void Employe::set_nom( const std::string nom )
{
    _nom = nom;
}

std::string Employe::get_numero_securite_national() const
{
    return _numero_securite_national;
}

void Employe::set_numero_securite_national( const std::string numero_securite_national )
{
    _numero_securite_national = numero_securite_national;
}

std::string Employe::to_string() const
{
    std::stringstream ss;
    ss << "Prenom: " << _prenom << std::endl;
    ss << "Nom: " << _nom << std::endl;
    ss << "Numero Securite National: " << _numero_securite_national << std::endl;
    return ss.str();
}

std::ostream &operator<<( std::ostream &out, const Employe &employe )
{
    return out << employe.to_string();
}
