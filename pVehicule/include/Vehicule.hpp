#ifndef VEHICULE_HPP
#define VEHICULE_HPP


class Vehicule
{
    public:
        Vehicule();
        Vehicule( const Vehicule &vehicule );
        Vehicule &operator=( const Vehicule &vehicule );
        virtual ~Vehicule() = 0;
        virtual void Klaxonne() = 0;
        void setNombrePortes( const int nombrePortes );
        int getNombreCylindres() const;
        void setNombreCylindres( const int nombreCylindres );
        int getNombreCylindres() const;

    protected:

    private:
        int nombrePortes;
        int nombreCylindres;
        std::string couleurVehicule;
        std::string typeTransmission;
};

#endif // VEHICULE_HPP
