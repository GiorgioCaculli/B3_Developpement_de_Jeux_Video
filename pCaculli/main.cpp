#include <iostream>

#include "include/Position1966.hpp"
#include "include/Personnage1966.hpp"
#include "include/Druide1966.hpp"
#include "include/Arene1966.hpp"

int main()
{
    std::cout << "Hello world!" << std::endl;

    Position1966 p(1,2);
    std::cout << p.str() << std::endl;

    Personnage1966 pet("Petunia",10,p);
    std::cout << pet.str() << std::endl;

    Position1966 p2(2,2);
    Druide1966 harry("Harry",30,p2,4);
    std::cout << harry.getInfo() << std::endl;

    Position1966 p3(2,4);
    Druide1966 ron("Ron",30,p3,1);
    Position1966 p5(1,1);
    Personnage1966 bob("Bob",5,p5);

    Arene1966 arene;
    arene.ajouterPersonnage(pet);
    arene.ajouterPersonnage(pet);
    arene.ajouterPersonnage(harry);
    arene.ajouterPersonnage(ron);
    arene.ajouterPersonnage(bob);
    std::cout<<arene.str()<<std::endl;
    std::cout<<std::endl;
    std::cout<<"***********************retirerPersonnage***********************"<<std::endl;
    arene.retirerPersonnage(bob);
    std::cout<<arene.str()<<std::endl;
    std::cout<<"***************************************************************"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"*************************to_string*****************************"<<std::endl;
    std::cout<<arene.to_string();
    std::cout<<std::endl;
    std::cout<<"***********************    copie    ***************************"<<std::endl;
    Arene1966 copie;
    copie = arene;
    std::cout<<copie.to_string();
    std::cout<<std::endl;
    std::cout<<"***************************************************************"<<std::endl;
    std::cout<<"********************LANCEMENT DE LA PARTIE*********************"<<std::endl;
    while(!arene.gameOver()){
        std::cout<<"***************************************************************"<<std::endl;
        arene.deplacer();
        std::cout<<arene.to_string();
    }
    std::cout<<std::endl;
    std::cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    std::cout<<"+++++++++++++++++++++++ FIN DE PARTIE +++++++++++++++++++++++++"<<std::endl;
    std::cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<std::endl;
    std::cout<<arene.to_string();
    return 0;
}
