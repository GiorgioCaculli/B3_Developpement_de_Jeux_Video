#ifndef EMPLOYECOMMISSION_HPP
#define EMPLOYECOMMISSION_HPP


#include "Employe.hpp"

class EmployeCommission
: public Employe
{
    public:
        EmployeCommission( std::string prenom, std::string nom, std::string numero_securite_national, float ventes, float commission );
        EmployeCommission( const EmployeCommission &employe_commission );
        EmployeCommission &operator=( const EmployeCommission &employe_commission );
        ~EmployeCommission() override;
        float get_ventes() const;
        void set_ventes( const float ventes );
        float get_commission() const;
        void set_commission( const float commission );
        std::string to_string() const override;
        float gain() const override;

    protected:

    private:
        float _ventes;
        float _commission;
};

#endif // EMPLOYECOMMISSION_HPP
