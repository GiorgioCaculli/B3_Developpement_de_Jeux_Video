#ifndef PERSONNEAEP_HPP
#define PERSONNEAEP_HPP

#include "Residence.hpp"

#include <string>

class PersonneAEP
{
    private:
        std::string nom;
        Residence *residence;
        int *id;
        static int compteur;
    public:
        PersonneAEP( std::string nom="NomDefault", Residence *residence=new Residence() );
        PersonneAEP( std::string nom, Residence &residence );
        ~PersonneAEP();
        PersonneAEP( const PersonneAEP &personneAEP );
        std::string str() const;
};

#endif // PERSONNEAEP_HPP
