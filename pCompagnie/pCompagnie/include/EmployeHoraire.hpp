#ifndef EMPLOYEHORAIRE_HPP
#define EMPLOYEHORAIRE_HPP

#include "EmployeSalarie.hpp"

#include <string>


class EmployeHoraire
: public EmployeSalarie
{
    public:
        EmployeHoraire( std::string prenom, std::string nom, std::string numero_securite_national, float salaire, float heures_prestees );
        EmployeHoraire( const EmployeHoraire &employe_horaire );
        EmployeHoraire &operator=( const EmployeHoraire &employe_horaire );
        ~EmployeHoraire() override;
        float get_heures_prestees() const;
        void set_heures_prestees( const float heures_prestees );
        std::string to_string() const override;
        float gain() const override;

    protected:

    private:
        float _heures_prestees;
};

#endif // EMPLOYEHORAIRE_HPP
