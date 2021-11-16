#ifndef POSITION1966_HPP
#define POSITION1966_HPP

#include <string>

class Position1966
{
    public:
        Position1966( int x1966=0, int y1966=0 );
        virtual ~Position1966();
        Position1966( const Position1966 &position1966 );
        Position1966& operator=( const Position1966 &rhs1966 );
        std::string str() const;
        bool operator==( const Position1966 &rhs1966 ) const;
        int get_x() const;
        void set_x( const int x1966 );
        int get_y() const;
        void set_y( const int y1966 );

    private:
        int x1966;
        int y1966;
};

#endif // POSITION1966_HPP
