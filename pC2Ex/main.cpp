#include <iostream>

#include <vector>
#include <random>
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;

    std::vector< int > numbers = std::vector< int > { 10, 2 };

    std::vector< int > *p_numbers = new std::vector< int >();

    std::vector< int * > numbers_p = std::vector< int * > { new int( 5 ), new int( 7 ) };

    std::vector< int * > *p_numbers_p = new std::vector< int * > { new int( 8 ), new int( 3 ) };

    int n = 0;

    std::cout << "Entrer le nombres d'entiers desires: ";
    std::cin >> n;

    int *tab = new int[n];

    for( int i = 0; i < n; i++ )
    {
        tab[i] = rand() % 10 + 1;
        numbers.push_back( rand() % 10 + 1 );
        p_numbers->push_back( rand() % 10 + 1 );
        numbers_p.push_back( new int( rand() % 10 + 1 ) );
        p_numbers_p->push_back( new int( rand() % 10 + 1 ) );
    }

    for( int j = 0; j < n; j++ )
    {
        std::cout << tab[ j ] << "\t";
    }

    std::cout << std::endl;

    for( int j = 0; j < n; j++ )
    {
        std::cout << numbers.at( j ) << "\t";
    }
    std::cout << std::endl;

    for( int j = 0; j < n; j++ )
    {
        std::cout << p_numbers->at( j ) << "\t";
    }
    std::cout << std::endl;

    for( int j = 0; j < n; j++ )
    {
        std::cout << *numbers_p.at( j ) << "\t";
        delete numbers_p.at( j );
    }

    std::cout << std::endl;

    delete []tab;

    delete p_numbers;

    delete p_numbers_p;

    return 0;
}
