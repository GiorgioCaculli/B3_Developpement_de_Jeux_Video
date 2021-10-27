#include "DisqueAIVL.hpp"

#include <sstream>

int DisqueAIVL::compteur = 0;

DisqueAIVL::DisqueAIVL( Point centre, double rayon )
: centre( centre )
, rayon( rayon )
{
    id = new int( ++compteur );
}

DisqueAIVL::~DisqueAIVL()
{
    delete id;
}

DisqueAIVL::DisqueAIVL( const DisqueAIVL &disqueAIVL )
: centre( disqueAIVL.centre )
, rayon( disqueAIVL.rayon )
{
    id = new int( *( disqueAIVL.id ) );
}

std::string DisqueAIVL::str() const
{
    std::stringstream ss;
    ss << "AIVL: " << "ID " << std::to_string( *id ) << " Centre " << centre.str() << " Rayon " << std::to_string( rayon );
    return ss.str();
}
