#ifndef DISQUEAIVL_HPP
#define DISQUEAIVL_HPP

#include "Point.hpp"

#include <string>

class DisqueAIVL
{
    private:
        Point centre;
        double rayon;
        int *id;
        static int compteur;
    public:
        DisqueAIVL( Point centre=Point(), double rayon=10. );
        ~DisqueAIVL();
        DisqueAIVL( const DisqueAIVL &disqueAIVL );
        std::string str() const;
};

#endif // DISQUEAIVL_HPP
