#include <iostream>

#include "Personne.hpp"

int main()
{

    std::cout << "Hello world!" << std::endl;

/*
    Personne p1 = Personne(); /* Allocation sur la pile, var auto, detruite a la fin du main (bloc) */
/*
    std::cout << p1.get_nom() << std::endl;

    Personne p2 = Personne( "Giovanni" );

    std::cout << p2.get_nom() << std::endl;

    Personne p3;

    std::cout << p3.get_nom() << std::endl;

    std::cout << Personne::get_compteur() << std::endl;

    Personne *pt = new Personne( "Dynamique" );

    std::cout << pt->get_nom() << std::endl;

    Personne *ppt = &p3;

    std::cout << ppt->get_nom() << std::endl;

    std::cout << ppt->get_age() << std::endl;

    Personne p4( "Albert", 43 );

    p1 = p4; /* Copie */
/*
    std::cout << p1.get_nom() << std::endl;

    delete pt;
*/
    Personne p;

    Personne *pt = new Personne( "Dynamique" );

    delete pt;

    return 0;
}
