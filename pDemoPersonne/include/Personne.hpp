#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

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
};

#endif // PERSONNE_HPP
