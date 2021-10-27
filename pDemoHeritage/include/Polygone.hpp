#ifndef POLYGONE_HPP
#define POLYGONE_HPP

#include <vector>

#include "Figure.hpp"

class Polygone
: public Figure
{
    private:
        std::vector< Figure * > sommets;
    public:
        Polygone();
        Polygone( const Polygone &polygone );
        virtual ~Polygone();
        void add( Figure * f );
        std::string str() const;
        Polygone *clone() const;
    protected:
};

#endif // POLYGONE_HPP
