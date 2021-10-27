#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <string>

#include "Point.hpp"

class Pixel
: public Point
{
    public:
        Pixel( float x = 0, float y = 0, std::string color="BLANC" );
        Pixel( const Pixel &pixel );
        Pixel &operator=( const Pixel &pixel );
        virtual ~Pixel();
        virtual std::string str() const;
        virtual bool operator==( const Pixel &pixel ) const;
        virtual Pixel *clone() const;

    protected:

    private:
        std::string _color;
};

#endif // PIXEL_HPP
