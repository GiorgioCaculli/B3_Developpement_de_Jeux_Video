#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <string>
#include <ostream>

class Employe
{
    public:
        Employe( std::string prenom, std::string nom, std::string numero_securite_national );
        Employe( const Employe &employe );
        Employe &operator=( const Employe &employe );
        virtual ~Employe() = default;
        std::string get_nom() const;
        void set_nom( const std::string nom );
        std::string get_prenom() const;
        void set_prenom( const std::string prenom );
        std::string get_numero_securite_national() const;
        void set_numero_securite_national( const std::string numero_securite_national );
        virtual std::string to_string() const;
        friend std::ostream &operator<<( std::ostream &out, const Employe &employe );
        virtual float gain() const = 0;

    protected:

    private:
        std::string _prenom;
        std::string _nom;
        std::string _numero_securite_national;
};

#endif // EMPLOYE_HPP
