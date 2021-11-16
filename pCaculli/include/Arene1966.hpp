#ifndef ARENE1966_HPP
#define ARENE1966_HPP

#include "Position1966.hpp"
#include "Personnage1966.hpp"
#include "Druide1966.hpp"

#include <vector>
#include <sstream>

class Arene1966
{
    public:
        Arene1966();
        virtual ~Arene1966();
        Arene1966( const Arene1966 &arene1966 );
        Arene1966 &operator=( const Arene1966 &rhs1966 );
        void ajouterPersonnage( const Personnage1966 &personnage1966 );
        void retirerPersonnage( Personnage1966 &personnage1966 );
        void deplacer();
        bool gameOver() const;
        std::string to_string() const;
        std::string str() const;

    protected:

    private:
        std::vector< Personnage1966 * > personnages1966;
};

#endif // ARENE1966_HPP
