#include "EmployeSalarieCommission.hpp"

#include <sstream>

EmployeSalarieCommission::EmployeSalarieCommission( std::string prenom, std::string nom, std::string numero_securite_national, float salaire, float ventes, float commission )
: EmployeCommission( prenom, nom, numero_securite_national, ventes, commission )
, _salaire( salaire )
{
}

EmployeSalarieCommission::EmployeSalarieCommission( const EmployeSalarieCommission &employe_salarie_commission )
: EmployeSalarieCommission( employe_salarie_commission.get_prenom(),
                           employe_salarie_commission.get_nom(),
                           employe_salarie_commission.get_numero_securite_national(),
                           employe_salarie_commission.get_salaire(),
                           employe_salarie_commission.get_ventes(),
                           employe_salarie_commission.get_commission() )
{
}

EmployeSalarieCommission &EmployeSalarieCommission::operator=( const EmployeSalarieCommission &employe_salarie_commission )
{
    if( &employe_salarie_commission != this )
    {
        EmployeCommission::operator=( employe_salarie_commission );
        _salaire = employe_salarie_commission._salaire;
    }
    return *this;
}

EmployeSalarieCommission::~EmployeSalarieCommission()
{
}

float EmployeSalarieCommission::get_salaire() const
{
    return _salaire;
}

void EmployeSalarieCommission::set_salaire( const float salaire )
{
    _salaire = salaire;
}


std::string EmployeSalarieCommission::to_string() const
{
    std::stringstream ss;
    ss << EmployeCommission::to_string();
    ss << "Salaire: " << std::to_string( _salaire ) << std::endl;
    return ss.str();
}

float EmployeSalarieCommission::gain() const
{
    return EmployeCommission::gain() * _salaire;
}
