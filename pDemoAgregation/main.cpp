#include <iostream>

#include "Residence.hpp"
#include "PersonneAIVL.hpp"
#include "PersonneAIP.hpp"
#include "PersonneAEP.hpp"
#include "PersonneAER.hpp"

#include "Point.hpp"
#include "DisqueAIVL.hpp"
#include "DisqueAIP.hpp"
#include "DisqueAEP.hpp"
#include "DisqueAER.hpp"

void personne_tests();
void disques_tests();

int main()
{
    personne_tests();
    disques_tests();

    return 0;
}

void disques_tests()
{

    Point p1( 10.f, 20.f );

    DisqueAIVL d1AIVL( p1, 25. );

    std::cout << d1AIVL.str() << std::endl;

    DisqueAIVL d2AIVL;

    std::cout << d2AIVL.str() << std::endl;

    DisqueAIP d1AIP( p1, 25. );

    std::cout << d1AIP.str() << std::endl;

    DisqueAIP d2AIP;

    std::cout << d2AIP.str() << std::endl;

    DisqueAEP d1AEP( &p1, 25. );

    std::cout << d1AEP.str() << std::endl;

    DisqueAEP d2AEP;

    std::cout << d2AEP.str() << std::endl;

    DisqueAER d1AER( p1, 25. );

    std::cout << d1AER.str() << std::endl;

    DisqueAER d2AER;

    std::cout << d2AER.str() << std::endl;
}

void personne_tests()
{
    std::cout << "Hello world!" << std::endl;

    Residence res( "R1", "N1", "V1", 1111 );

    std::cout << res.str() << std::endl;

    PersonneAIVL p1AIVL( "Giorgio", res );

    std::cout << p1AIVL.str() << std::endl;

    PersonneAIVL p2AIVL;

    std::cout << p2AIVL.str() << std::endl;

    PersonneAIP p1AIP( "Giorgio", res );

    std::cout << p1AIP.str() << std::endl;

    PersonneAIP p2AIP;

    std::cout << p2AIP.str() << std::endl;

    PersonneAEP p1AEP( "Giorgio", &res );

    std::cout << p1AEP.str() << std::endl;

    PersonneAEP p2AEP;

    std::cout << p2AEP.str() << std::endl;

    PersonneAEP pRAEP ( "RAEP", res );

    std::cout << pRAEP.str() << std::endl;

    PersonneAER p1AER( "Giorgio", res );

    std::cout << p1AER.str() << std::endl;

    PersonneAER p2AER;

    std::cout << p2AER.str() << std::endl;
}
