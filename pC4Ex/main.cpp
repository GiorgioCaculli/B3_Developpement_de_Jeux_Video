#include <iostream>

#include "Vecteur3d.hpp"
#include "Matrice.hpp"
#include "MatriceAgregationInterne.hpp"
#include "MatriceAgregationExterne.hpp"

int main()
{
    Vecteur3d v1( 1, 2, 3 );
    Vecteur3d v2( 4, 5, 6 );
    Vecteur3d v3( v1 );

    std::cout << ( v1 == v3 ) << std::endl;
    std::cout << ( v1 != v2 ) << std::endl;

    Vecteur3d v_add = v1 + v2;
    std::cout << v_add << std::endl;

    std::cout << std::to_string( v1 * v2 ) << std::endl;

    std::cout << std::to_string( v2( 1 ) ) << std::endl;
    std::cout << std::to_string( v2( 2 ) ) << std::endl;
    std::cout << std::to_string( v2( 3 ) ) << std::endl;

    /*Vecteur3d v4;
    std::cin >> v4;

    std::cout << v4 << std::endl;*/

    MatriceAgregationInterne mai;

    std::cout << *mai(0) << std::endl;
    //std::cout << *mai(1) << std::endl;
    return 0;
}
