#include <iostream>

#include "Functions.hpp"
#include "Point.hpp"
#include "Personne.hpp"

int main()
{
    Point a( 10, 2 );
    Point b( 2, 20 );

    Point c = a + b;

    std::cout << c.get_x() << " " << c.get_y() << std::endl;

    Point d = a - b;

    std::cout << d.get_x() << " " << d.get_y() << std::endl;

    Point e(10, 2);

    std::cout << ( a == e ) << std::endl;

    Point f;
    f = a;

    std::cout << a(2) << std::endl;

    std::cout << a << std::endl;

    std::cout << a * b << std::endl;

    std::cout << ( a + 10 ).str() << std::endl;

    Personne p( "Giorgio", 24 );

    std::cout << p << std::endl;

    std::cin >> p;

    std::cout << p << std::endl;

    return 0;
}
