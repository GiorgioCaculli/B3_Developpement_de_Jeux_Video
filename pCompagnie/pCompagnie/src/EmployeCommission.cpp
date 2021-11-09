#include "EmployeCommission.hpp"

#include <sstream>

EmployeCommission::EmployeCommission( std::string prenom, std::string nom, std::string numero_securite_national, float ventes, float commission )
: Employe( prenom, nom, numero_securite_national )
, _ventes( ventes )
, _commission( commission )
{
}

EmployeCommission::EmployeCommission( const EmployeCommission &employe_commission )
: EmployeCommission( employe_commission.get_prenom(), employe_commission.get_nom(), employe_commission.get_numero_securite_national(), employe_commission._ventes, employe_commission._commission )
{
}

EmployeCommission &EmployeCommission::operator=( const EmployeCommission &employe_commission )
{
    if( &employe_commission != this )
    {
        Employe::operator=( employe_commission );
        _ventes = employe_commission._ventes;
        _commission = employe_commission._commission;
    }
    return *this;
}

EmployeCommission::~EmployeCommission()
{
}

float EmployeCommission::get_ventes() const
{
    return _ventes;
}

void EmployeCommission::set_ventes( const float ventes )
{
    _ventes = ventes;
}

float EmployeCommission::get_commission() const
{
    return _commission;
}

void EmployeCommission::set_commission( const float commission )
{
    _commission = commission;
}

std::string EmployeCommission::to_string() const
{
    std::stringstream ss;
    ss << Employe::to_string();
    ss << "Ventes " << std::to_string( _ventes ) << std::endl;
    ss << "Commission " << std::to_string( _commission ) << std::endl;
    return ss.str();
}

float EmployeCommission::gain() const
{
    return _ventes * _commission;
}
