#ifndef DISQUEAER_HPP
#define DISQUEAER_HPP

#include "Point.hpp"

#include <string>

class DisqueAER
{
    private:
        Point &centre;
        double rayon;
    public:
        DisqueAER( Point &centre=( *( new Point() ) ), double rayon=25. );
        ~DisqueAER();
        DisqueAER( const DisqueAER &disqueAER );
        std::string str() const;
};

#endif // DISQUEAER_HPP
