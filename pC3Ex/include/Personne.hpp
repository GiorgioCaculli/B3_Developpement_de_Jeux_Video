#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne
{
    public:
        enum Habitat{ VILLE, VILLAGE, CAMPAGNE };
        Personne( std::string nom, std::string prenom, int age, Habitat adresse );
        Personne( const Personne &p );
        ~Personne();
        std::string categorieAge() const;
        std::string categorieResidence() const;
        std::string str() const;
        friend void copy_test( Personne p );
    private:
        std::string nom;
        std::string prenom;
        int age;
        Habitat adresse;
        int *id;
        int val;

        static inline int compteur = 0;
};

#endif // PERSONNE_HPP
