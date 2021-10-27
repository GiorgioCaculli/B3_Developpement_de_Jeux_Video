#ifndef PERSONNEAIP_HPP
#define PERSONNEAIP_HPP

#include "Residence.hpp"

#include <string>

class PersonneAIP
{
    private:
        std::string nom;
        Residence *residence;
        int *id;
        static int compteur;
    public:
        PersonneAIP( std::string nom="NomDefault", Residence residence=Residence() );
        ~PersonneAIP();
        PersonneAIP( const PersonneAIP &personneAIP );
        std::string str() const;
};

#endif // PERSONNEAIP_HPP
