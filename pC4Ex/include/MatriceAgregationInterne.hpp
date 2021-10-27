#ifndef MATRICEAGREGATIONINTERNE_HPP
#define MATRICEAGREGATIONINTERNE_HPP

#include <vector>

#include "Vecteur3d.hpp"

class MatriceAgregationInterne
{
    public:
        MatriceAgregationInterne( float nb_lignes=0 );
        MatriceAgregationInterne( const MatriceAgregationInterne &matrice );
        MatriceAgregationInterne &operator=( const MatriceAgregationInterne &matrice );
        virtual ~MatriceAgregationInterne();
        Vecteur3d *operator()( const int i ) const;

    private:
        std::vector< Vecteur3d * > lignes;
};

#endif // MATRICEAGREGATIONINTERNE_HPP
