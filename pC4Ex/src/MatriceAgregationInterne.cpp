#include "MatriceAgregationInterne.hpp"

MatriceAgregationInterne::MatriceAgregationInterne( float nb_lignes )
: lignes( std::vector< Vecteur3d * >() )
{
    for( int i = 0; i < nb_lignes; i++ )
    {
        lignes.push_back( new Vecteur3d( i + 1, i + 1, i + 1 ) );
    }
}

MatriceAgregationInterne::MatriceAgregationInterne( const MatriceAgregationInterne &matrice )
: lignes( matrice.lignes )
{
}

MatriceAgregationInterne &MatriceAgregationInterne::operator=( const MatriceAgregationInterne &matrice )
{
    if( &matrice != this )
    {
        lignes = matrice.lignes;
    }
    return *this;
}

MatriceAgregationInterne::~MatriceAgregationInterne()
{
    for( Vecteur3d *v : lignes )
    {
        delete v;
    }
    lignes.clear();
}

Vecteur3d *MatriceAgregationInterne::operator()( const int i ) const
{
    if( i >= lignes.size() )
    {
        return nullptr;
    }
    return lignes.at( i );
}
