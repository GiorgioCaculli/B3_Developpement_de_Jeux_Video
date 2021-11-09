#include <iostream>
#include <array>

#include "Employe.hpp"
#include "EmployeSalarie.hpp"
#include "EmployeHoraire.hpp"
#include "EmployeCommission.hpp"
#include "EmployeSalarieCommission.hpp"

int main()
{
    std::array< Employe *, 4 > employees =
    {
        new EmployeSalarie( "Jean", "Dupont", "111-11-1111", 500.00 ),
        new EmployeHoraire( "Pierre", "Grojean", "222-22-2222", 20.00, 45.00 ),
        new EmployeCommission( "Robert", "Ledoux", "333-33-3333", 10000.00, 0.06 ),
        new EmployeSalarieCommission( "Albert", "Voisin", "444-44-4444", 200.00, 12000.00, 0.02 )
    };

    for( Employe *employe : employees )
    {
        std::cout << *employe;
        std::cout << "Retribution: " << employe->gain() << std::endl;
    }

    for( Employe *employe : employees )
    {
        std::cout << "\nSuppression object " << typeid( *employe ).name();
        delete employe;
    }

    std::cout << std::endl;
    return 0;
}
