#ifndef FIGURE_HPP
#define FIGURE_HPP

#include <string>

class Figure
{
    public:
        Figure();
        virtual ~Figure();
        Figure( const Figure &figure );
        Figure &operator=( const Figure &figure );
        virtual Figure *clone() const = 0;
        virtual std::string str() const = 0;
        virtual bool operator==( const Figure &figure ) const = 0;
    protected:

    private:
};

#endif // FIGURE_HPP
