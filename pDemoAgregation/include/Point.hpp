#ifndef POINT_HPP
#define POINT_HPP

#include <string>

class Point
{
    public:
        float x;
        float y;
        int *id; /* Gestion de memoire sur le tas */
        static int nb_points;
        Point( float x = 0, float y = 0 );
        Point( const Point &p );
        ~Point();
        float get_x() const;
        float get_y() const;
        void translate_p( float x, float y );
        void rotation( float deg );
        static int combien_points();
        static float distance( const Point &p1, const Point &p2 );
        std::string str() const;
        friend bool coincide( Point p1, Point p2 );

    private:
};

#endif // POINT_HPP
