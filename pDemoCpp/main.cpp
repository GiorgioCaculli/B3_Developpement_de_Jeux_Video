#include <iostream>
#include <string>

//using namespace std;

void echange( int *a, int *b )
{
    int c = *a;
    *a = *b;
    *b = c;
}

void echange( int &a, int &b ) // Passage par reference
{
    int c = a;
    a = b;
    b = c;
}

void f( int i, int &ri, int *pi )
{
}

int main()
{
    std::cout << "Hello world!" << std::endl;

    /*
    std::cout << "Quel age avez vous?" << std::endl;

    int age;

    std::cin >> age;

    std::cout << "Vous avez " << age << " ans." << std::endl;
    */

    int a = 3;
    int b = 2;

    std::cout << "Avant:" << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;

    //echange( &a, &b ); // Peu intuitif, passage d'adresses => utilisation references
    echange( a, b );

    std::cout << "Apres:" << std::endl;
    std::cout << "a = " << a << " b = " << b << std::endl;

    int i = 2;
    int &ri = i;
    int *pi = &i;

    f( i, ri, pi );
    f( i, *pi, &ri ); // ORIGINAL f( i, pi, ri );
    f( *pi, i, &ri ); // ORIGINAL f( pi, i, ri );
    f( *pi, ri, &i ); // ORIGINAL f( pi, ri, i );
    f( ri, i, pi );
    f( ri, *pi, &i ); // ORIGINAL f( ri, pi, i );
    f( ri, ri, &ri ); // ORIGINAL f( ri, ri, ri );
    f( *pi, *pi, pi ); // ORIGINAL f( pi, pi, pi );
    f( i, i, &i ); // ORIGINAL f( i, i, i );
    f( ri, i, &ri ); // ORIGINAL f( ri, i, ri );

    int *npi = &a;

    npi = new int;

    *npi = 88;

    std::cout << "npi: " << *npi << std::endl;

    delete npi;

    return 0;
}
