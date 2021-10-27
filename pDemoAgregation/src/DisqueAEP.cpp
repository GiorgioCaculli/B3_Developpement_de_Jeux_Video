#include "DisqueAEP.hpp"

#include <sstream>

DisqueAEP::DisqueAEP( Point *centre, double rayon )
: centre( centre )
, rayon( rayon )
{
}

DisqueAEP::~DisqueAEP()
{
}

DisqueAEP::DisqueAEP( const DisqueAEP &disqueAEP )
: centre( disqueAEP.centre )
, rayon( disqueAEP.rayon )
{
}

std::string DisqueAEP::str() const
{
    std::stringstream ss;
    ss << "AEP: " << "Centre " << centre->str() << " Rayon " << std::to_string( rayon );
    return ss.str();
}
