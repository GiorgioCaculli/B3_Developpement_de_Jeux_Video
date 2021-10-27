#ifndef DISQUEAEP_HPP
#define DISQUEAEP_HPP

#include "Point.hpp"

#include <string>

class DisqueAEP
{
    private:
        Point *centre;
        double rayon;
    public:
        DisqueAEP( Point *centre=new Point(), double rayon=25. );
        ~DisqueAEP();
        DisqueAEP( const DisqueAEP &disqueAEP );
        std::string str() const;
};

#endif // DISQUEAEP_HPP
