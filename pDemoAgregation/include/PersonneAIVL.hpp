#ifndef PERSONNEAIVL_HPP
#define PERSONNEAIVL_HPP

#include "Residence.hpp"

#include <string>


class PersonneAIVL
{
    private:
        std::string nom;
        Residence residence;
        int *id;
        static int compteur;

    public:
        PersonneAIVL( std::string nom="NomDefault", Residence residence=Residence() );
        ~PersonneAIVL();
        PersonneAIVL( const PersonneAIVL &personneAIVL );
        std::string str() const;
};

#endif // PERSONNEAIVL_HPP
