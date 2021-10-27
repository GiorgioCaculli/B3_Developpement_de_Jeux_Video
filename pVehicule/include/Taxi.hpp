#ifndef TAXI_HPP
#define TAXI_HPP

#include <.h>


class Taxi
{
    public:
        Taxi();
        virtual ~Taxi();
        Taxi(const Taxi& other);
        Taxi& operator=(const Taxi& other);

    protected:

    private:
};

#endif // TAXI_HPP
