#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
#include <ostream>
#include <istream>

class Personne
{
    private:
        std::string nom;
        int age;
        static int compteur;/* = 10; Changer la version du compilateur */
    public:
        Personne();
        Personne( std::string nom );
        Personne( std::string nom, const int age );
        ~Personne();

        std::string get_nom() const;

        int get_age() const;

        static int get_compteur();
        friend std::ostream &operator<<( std::ostream &os, const Personne &personne );
        friend std::istream &operator>>( std::istream &is, Personne &personne );
};

#endif // PERSONNE_HPP
