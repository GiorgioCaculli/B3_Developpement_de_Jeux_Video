#include "../include/Arene1966.hpp"

#include <algorithm>

#include <ctime>
#include <cstdlib>


Arene1966::Arene1966()
: personnages1966( std::vector< Personnage1966 * >() )
{
}

Arene1966::~Arene1966()
{
    for( Personnage1966 *p : personnages1966 )
    {
        delete p;
    }
    personnages1966.clear();
}

Arene1966::Arene1966( const Arene1966& arene1966 )
: personnages1966( std::vector< Personnage1966 * >() )
{
}

Arene1966& Arene1966::operator=( const Arene1966& rhs1966 )
{
    if ( this != &rhs1966 )
    {
        for( Personnage1966 *p1966 : rhs1966.personnages1966 )
        {
            personnages1966.push_back( new Personnage1966( *p1966 ) );
        }
    }
    return *this;
}

void Arene1966::ajouterPersonnage( const Personnage1966 &personnage1966 )
{
    for( Personnage1966 *p1966 : personnages1966 )
    {
        if( *p1966 == personnage1966 )
        {
            return;
        }
    }
    personnages1966.push_back( new Personnage1966( personnage1966 ) );
}

void Arene1966::retirerPersonnage( Personnage1966 &personnage1966 )
{
    for( Personnage1966 *p1966 : personnages1966 )
    {
        if( *p1966 == personnage1966 )
        {
            Personnage1966 *pTemp1966 = p1966;
            personnages1966.erase( std::remove( personnages1966.begin(), personnages1966.end(), p1966), personnages1966.end() );
            delete pTemp1966;
        }
    }
    personnages1966.resize(personnages1966.size());
}

void Arene1966::deplacer()
{
    std::vector< Personnage1966 * > personnagesARetirer1966 = std::vector< Personnage1966 * >();
    for( Personnage1966 *p1966 : personnages1966 )
    {
        int random_x = 1 + std::rand() / ( ( RAND_MAX + 1u ) / 6 ) - 1;
        int random_y = 1 + std::rand() / ( ( RAND_MAX + 1u ) / 6 ) - 1;
        Position1966 pos1966 = Position1966( random_x, random_y );
        p1966->set_position( pos1966 );
        for( Personnage1966 *pTemp1966 : personnages1966 )
        {
            if( pTemp1966 != p1966 )
            {
                if( pTemp1966->get_position() == p1966->get_position() )
                {
                    if( pTemp1966->get_vie() > p1966->get_vie() )
                    {
                        personnagesARetirer1966.push_back( p1966 );
                        pTemp1966->set_vie( pTemp1966->get_vie() - p1966->get_vie() );
                    }
                    else if( pTemp1966->get_vie() < p1966->get_vie() )
                    {
                        personnagesARetirer1966.push_back( pTemp1966 );
                        p1966->set_vie( p1966->get_vie() - pTemp1966->get_vie() );
                    }
                    else
                    {
                        personnagesARetirer1966.push_back( p1966 );
                        personnagesARetirer1966.push_back( pTemp1966 );
                    }
                }
            }
        }
    }
    for( Personnage1966 *p1966 : personnagesARetirer1966 )
    {
        retirerPersonnage( *p1966 );
        personnagesARetirer1966.erase( std::remove( personnagesARetirer1966.begin(), personnagesARetirer1966.end(), p1966), personnagesARetirer1966.end() );
    }
    personnagesARetirer1966.clear();
}

bool Arene1966::gameOver() const
{
    return personnages1966.size() < 2;
}

std::string Arene1966::to_string() const
{
    std::stringstream strAffichage1966;
    for( int i = 0; i < 5; i++ )
    {
        for( int j = 0; j < 5; j++ )
        {
            bool pTrouve1966 = false;
            Personnage1966 *pTemp1966 = nullptr;
            for( Personnage1966 *p1966 : personnages1966 )
            {
                if( p1966->get_position().get_x() == i && p1966->get_position().get_y() == j )
                {
                    pTrouve1966 = true;
                    pTemp1966 = p1966;
                }
            }
            if( pTrouve1966 )
            {
                strAffichage1966 << "\t" << pTemp1966->getInfo();
            }
            else
            {
                strAffichage1966 << "\t+";
            }
        }
        strAffichage1966 << std::endl;
    }
    return strAffichage1966.str();
}

std::string Arene1966::str() const
{
    std::stringstream ss1966;
    for( Personnage1966 *p1966 : personnages1966 )
    {
        ss1966 << p1966->str() << std::endl;
    }
    return ss1966.str();
}
