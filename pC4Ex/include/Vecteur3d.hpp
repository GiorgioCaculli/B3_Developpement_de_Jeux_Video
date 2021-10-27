#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

#include <ostream>
#include <istream>


class Vecteur3d
{
    private:
        int x;
        int y;
        int z;
    public:
        Vecteur3d( const int x=0, const int y=0, const int z=0 );
        Vecteur3d( const Vecteur3d &vecteur3d );
        Vecteur3d &operator=( const Vecteur3d &vecteur3d );
        virtual ~Vecteur3d();

        bool operator==( const Vecteur3d &vecteur3d ) const;
        Vecteur3d operator+( const Vecteur3d &vecteur3d ) const;
        float operator*( const Vecteur3d &vecteur3d ) const;
        int operator()( const int i ) const;

        friend bool operator!=( const Vecteur3d &vecteur3d1, const Vecteur3d &vecteur3d2 );
        friend std::ostream &operator<<( std::ostream &os, const Vecteur3d &vecteur3d );
        friend std::istream &operator>>( std::istream &is, Vecteur3d &vecteur3d );
};

#endif // VECTEUR3D_HPP
