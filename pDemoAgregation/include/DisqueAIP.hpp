#ifndef DISQUEAIP_HPP
#define DISQUEAIP_HPP

#include "Point.hpp"

#include <string>

class DisqueAIP
{
    private:
        Point *centre;
        double rayon;
    public:
        DisqueAIP( Point centre=Point(), double rayon=10. );
        ~DisqueAIP();
        DisqueAIP( const DisqueAIP &disqueAIP );
        std::string str() const;
};

#endif // DISQUEAIP_HPP
