#include <iostream>

#include "Point.hpp"
#include "Pixel.hpp"
#include "Figure.hpp"
#include "Polygone.hpp"

void info( Point &p )
{
    std::cout << "Dans la methode info: " << p.str() << std::endl;
}

int main()
{
    std::cout << "Hello world!" << std::endl;

    Figure *f;

    Pixel p( 10, 20, "ROUGE" );

    std::cout << p.str() << std::endl;

    Point *pt_p = new Pixel( 1, 2, "ROUGE" );

    std::cout << pt_p->str() << std::endl;

    info( *pt_p );

    Point *p2 = p.clone();

    delete pt_p;
    delete p2;

    Polygone poly;

    poly.add( &p );
    poly.add( p2 );


    std::cout << "Polygone" << std::endl;
    std::cout << poly.str() << std::endl;

    Pixel *p3 = p.clone();

    std::cout << ( p == p3 ) << std::endl;

    return 0;
}
