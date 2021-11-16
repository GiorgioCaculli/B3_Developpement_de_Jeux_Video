#ifndef PERSONNAGE1966_HPP
#define PERSONNAGE1966_HPP

#include "Position1966.hpp"

#include <string>

class Personnage1966
{
    public:
        Personnage1966( std::string nom1966, int vie1966, Position1966 position1966 );
        virtual ~Personnage1966();
        Personnage1966( const Personnage1966 &personnage1966 );
        Personnage1966 &operator=( const Personnage1966 &rhs1966);
        bool operator==( const Personnage1966 &rhs1966 ) const;
        bool operator!=( const Personnage1966 &rhs1966 ) const;
        virtual std::string getInfo() const;
        std::string get_nom() const;
        int get_vie() const;
        void set_vie( const int vie1966 );
        Position1966 get_position() const;
        void set_position( const Position1966 &position1966 );
        virtual Personnage1966 *clone() const;
        virtual std::string str() const;

    protected:

    private:
        std::string nom1966;
        int vie1966;
        Position1966 position1966;
};

#endif // PERSONNAGE1966_HPP
