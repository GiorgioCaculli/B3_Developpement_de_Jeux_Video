#ifndef POINT_HPP
#define POINT_HPP

#include <string>

#include "Figure.hpp"

class Point
: public Figure
{
    private:
        float x;
        float y;
        int *id; /* Gestion de memoire sur le tas */
        static int nb_points;
    public:
        Point( float x = 0, float y = 0 );
        Point( const Point &p );
        Point &operator=( const Point &point );
        virtual ~Point();
        float get_x() const;
        float get_y() const;
        void set_x( const float x );
        void set_y( const float y );
        void translate_p( float x, float y );
        void rotation( float deg );
        static int combien_points();
        static float distance( const Point &p1, const Point &p2 );
        virtual std::string str() const;
        friend bool coincide( Point p1, Point p2 );
        virtual Point *clone() const;
        virtual bool operator==( const Point &point ) const;
};

#endif // POINT_HPP
