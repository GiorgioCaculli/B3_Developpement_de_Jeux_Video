#ifndef EMPLOYESALARIECOMMISSION_HPP
#define EMPLOYESALARIECOMMISSION_HPP

#include "EmployeCommission.hpp"

#include <string>


class EmployeSalarieCommission
: public EmployeCommission
{
    public:
        EmployeSalarieCommission( std::string prenom, std::string nom, std::string numero_securite_national, float salaire, float ventes, float commission );
        EmployeSalarieCommission( const EmployeSalarieCommission &employe_salarie_commission );
        EmployeSalarieCommission &operator=( const EmployeSalarieCommission &employe_salarie_commission );
        ~EmployeSalarieCommission() override;
        float get_salaire() const;
        void set_salaire( const float salaire );
        std::string to_string() const override;
        float gain() const override;

    protected:

    private:
        float _salaire;
};

#endif // EMPLOYESALARIECOMMISSION_HPP
