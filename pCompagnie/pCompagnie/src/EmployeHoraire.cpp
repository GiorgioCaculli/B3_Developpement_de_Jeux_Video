#include "EmployeHoraire.hpp"

#include <sstream>

EmployeHoraire::EmployeHoraire( std::string prenom, std::string nom, std::string numero_securite_national, float salaire, float heures_prestees )
: EmployeSalarie( prenom, nom, numero_securite_national, salaire )
, _heures_prestees( heures_prestees )
{
}

EmployeHoraire::EmployeHoraire( const EmployeHoraire &employe_horaire )
: EmployeHoraire( employe_horaire.get_prenom(), employe_horaire.get_nom(), employe_horaire.get_numero_securite_national(), employe_horaire.get_salaire(), employe_horaire._heures_prestees)
{
}

EmployeHoraire &EmployeHoraire::operator=( const EmployeHoraire &employe_horaire )
{
    if( &employe_horaire != this )
    {
        EmployeSalarie::operator=( employe_horaire );
        _heures_prestees = employe_horaire._heures_prestees;
    }
    return *this;
}

EmployeHoraire::~EmployeHoraire()
{
}

float EmployeHoraire::get_heures_prestees() const
{
    return _heures_prestees;
}

void EmployeHoraire::set_heures_prestees( const float heures_prestees )
{
    _heures_prestees = heures_prestees;
}

std::string EmployeHoraire::to_string() const
{
    std::stringstream ss;
    ss << EmployeSalarie::to_string();
    ss << "Heures Prestees: " << std::to_string( _heures_prestees ) << std::endl;
    return ss.str();
}

float EmployeHoraire::gain() const
{
    return get_salaire() * _heures_prestees;
}
