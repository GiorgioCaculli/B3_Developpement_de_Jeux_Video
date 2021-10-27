#include "DisqueAER.hpp"

#include <sstream>

DisqueAER::DisqueAER( Point &centre, double rayon )
: centre( centre )
, rayon( rayon )
{
}

DisqueAER::~DisqueAER()
{
}

DisqueAER::DisqueAER( const DisqueAER &disqueAER )
: centre( disqueAER.centre )
, rayon( disqueAER.rayon )
{
}

std::string DisqueAER::str() const
{
    std::stringstream ss;
    ss << "AER: " << "Centre " << centre.str() << " Rayon " << std::to_string( rayon );
    return ss.str();
}
