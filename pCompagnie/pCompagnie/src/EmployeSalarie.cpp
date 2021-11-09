#include "EmployeSalarie.hpp"

#include <sstream>

EmployeSalarie::EmployeSalarie( std::string prenom, std::string nom, std::string numero_securite_national, float salaire )
: Employe( prenom, nom, numero_securite_national )
, _salaire( salaire )
{
}

EmployeSalarie::EmployeSalarie( const EmployeSalarie &employe_salaire )
: EmployeSalarie( employe_salaire.get_prenom(), employe_salaire.get_nom(), employe_salaire.get_numero_securite_national(), employe_salaire._salaire )
{
}

EmployeSalarie &EmployeSalarie::operator=( const EmployeSalarie &employe_salaire )
{
    if( &employe_salaire != this )
    {
        Employe::operator=( employe_salaire );
        _salaire = employe_salaire._salaire;
    }
    return *this;
}

EmployeSalarie::~EmployeSalarie()
{
}

float EmployeSalarie::get_salaire() const
{
    return _salaire;
}

void EmployeSalarie::set_salaire( const float salaire )
{
    _salaire = salaire;
}

std::string EmployeSalarie::to_string() const
{
    std::stringstream ss;
    ss << Employe::to_string();
    ss << "Salaire: " << std::to_string( _salaire ) << std::endl;
    return ss.str();
}

float EmployeSalarie::gain() const
{
    return _salaire;
}
