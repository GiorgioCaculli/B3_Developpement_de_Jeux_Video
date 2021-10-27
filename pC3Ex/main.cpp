#include <iostream>

#include "Personne.hpp"
#include "Point.hpp"

/*void copy_test( Personne p )
{
    std::cout << std::to_string( *( p.id ) ) << std::endl;
}*/

int main()
{
    /*std::cout << "Hello world!" << std::endl;

    Personne p1("Caculli", "Giorgio", 24, Personne::VILLAGE );

    Personne p2("Super", "Mario", 27, Personne::CAMPAGNE );

    Personne p3("Wa", "Luigi", 12, Personne::VILLE );

    std::cout << p1.str() << std::endl;

    std::cout << p2.str() << std::endl;

    std::cout << p3.str() << std::endl;

    copy_test( p1 );*/

    Point p1;
    Point p2( 1., 0. );
    Point p3( 1.8, 2.3 );

    std::cout << "P1 - " << p1.str() << std::endl;

    p1.translate_p( 2., 3. );

    std::cout << "P1 - " << p1.str() << std::endl;

    std::cout << "Nombre de points: " << Point::combien_points() << std::endl;

    std::cout << "Distance entre P1 et P2: " << Point::distance( p1, p2 ) << std::endl;

    std::cout << "P2 - " << p2.str() << std::endl;

    p2.rotation( 90. );

    std::cout << "P2 - Rotate angle - " << p2.str() << std::endl;

    p2.rotation( 90. );
    p2.rotation( 90. );
    p2.rotation( 90. );

    std::cout << "P2 - Rotate angle - " << p2.str() << std::endl;

    std::cout << coincide( p1, p1 ) << std::endl;
    std::cout << coincide( p1, p2 ) << std::endl;

    return 0;
}
