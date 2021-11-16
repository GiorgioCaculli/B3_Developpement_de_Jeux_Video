#ifndef DRUIDE1966_HPP
#define DRUIDE1966_HPP

#include "Personnage1966.hpp"

#include <string>

class Druide1966
: public Personnage1966
{
    public:
        Druide1966( std::string nom1966, int vie1966, Position1966 position1966, int magie1966 );
        virtual ~Druide1966();
        Druide1966( const Druide1966 &druide1966 );
        Druide1966 &operator=( const Druide1966 &rhs1966 );
        Druide1966 *clone() const override;
        std::string str() const override;
        std::string getInfo() const override;

    protected:

    private:
        int magie1966;

};

#endif // DRUIDE1966_HPP
