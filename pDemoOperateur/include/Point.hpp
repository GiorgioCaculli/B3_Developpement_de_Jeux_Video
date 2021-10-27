#ifndef POINT_HPP
#define POINT_HPP

#include <string>
#include <ostream>
#include <istream>

class Point
{
    private:
        float x;
        float y;
        int *id; /* Gestion de memoire sur le tas */
        static int nb_points;
    public:
        Point( float x = 0, float y = 0 );
        Point( const Point &p );
        Point &operator=( const Point &p );
        ~Point();
        float get_x() const;
        float get_y() const;
        void translate_p( float x, float y );
        void rotation( float deg );
        static int combien_points();
        static float distance( const Point &p1, const Point &p2 );
        std::string str() const;
        friend bool coincide( Point p1, Point p2 );
        Point operator+( const Point &point ) const;
        Point operator+( const float translation ) const;
        friend Point operator-( Point point1, Point point2 );
        float operator*( const Point &point ) const;
        bool operator==( const Point &point ) const;
        float operator()( const int i ) const;
        friend std::ostream &operator<<( std::ostream &os, const Point &point );
        friend std::istream &operator>>( std::istream &is, Point &point );
};

#endif // POINT_HPP
