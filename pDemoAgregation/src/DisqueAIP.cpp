#include "DisqueAIP.hpp"

#include <sstream>

DisqueAIP::DisqueAIP( Point centre, double rayon )
: centre( new Point( centre ) )
, rayon( rayon )
{
}

DisqueAIP::~DisqueAIP()
{
    delete centre;
}

DisqueAIP::DisqueAIP( const DisqueAIP &disqueAIP )
: centre( new Point( *( disqueAIP.centre ) ) )
, rayon( disqueAIP.rayon )
{
}

std::string DisqueAIP::str() const
{
    std::stringstream ss;
    ss << "AIP: " << "Centre " << centre->str() << " Rayon " << std::to_string( rayon );
    return ss.str();
}
