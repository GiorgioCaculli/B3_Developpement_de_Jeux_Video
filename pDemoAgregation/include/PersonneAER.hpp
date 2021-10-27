#ifndef PERSONNEAER_HPP
#define PERSONNEAER_HPP

#include "Residence.hpp"

#include <string>

class PersonneAER
{
    private:
        std::string nom;
        Residence  &residence;
        int *id;
        static int compteur;
    public:
        PersonneAER( std::string nom="NomDefault", Residence &residence=( * ( new Residence() ) ) );
        ~PersonneAER();
        PersonneAER( const PersonneAER &personneAER );
        std::string str() const;
};

#endif // PERSONNEAER_HPP
