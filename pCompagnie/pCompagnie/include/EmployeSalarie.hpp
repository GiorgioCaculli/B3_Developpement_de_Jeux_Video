#ifndef EMPLOYESALARIE_HPP
#define EMPLOYESALARIE_HPP

#include "Employe.hpp"

#include <string>

class EmployeSalarie
: public Employe
{
    public:
        EmployeSalarie( std::string prenom, std::string nom, std::string numero_securite_national, float salaire );
        EmployeSalarie( const EmployeSalarie &employe_salaire );
        EmployeSalarie &operator=( const EmployeSalarie &employe_salaire );
        ~EmployeSalarie() override;
        float get_salaire() const;
        void set_salaire( const float salaire );
        std::string to_string() const override;
        float gain() const override;

    protected:

    private:
        float _salaire;
};

#endif // EMPLOYESALARIE_HPP
