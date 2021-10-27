#ifndef RESIDENCE_HPP
#define RESIDENCE_HPP

#include <string>

class Residence
{
    private:
        std::string rue;
        std::string numero;
        std::string ville;
        int code_postal;
        int *id;
        static int compteur;

    public:
        Residence( std::string rue="RDefault", std::string numero="NDefault", std::string ville="VDefault", int code_postal=1000 );
        Residence( const Residence &residence );
        ~Residence();
        /*Residence &operator=(const Residence &residence);*/
        std::string str() const;
};

#endif // RESIDENCE_HPP
