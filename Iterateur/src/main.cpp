#include <iostream>
#include <assert.h>
#include "Partition.h"
#include "Mock.h"
#include "../cppitertools/enumerate.hpp"


int main() {

    NoteMusicale note1{}, note2{}, note3{};
    Partition partition{"partition 1","inconnue"};
    std::cout<< "Creation de la partition : " << partition.lireNom()
    << " du fameux auteur : "<< partition.lireAuteur()<<std::endl;
    partition.ajouterNote(&note1);
    partition.ajouterNote(&note2);
    partition.ajouterNote(&note3);

    std::cout<< "La partition contient les notes aux adresses suivante : "<<std::endl;
    for (auto&& it : iter::enumerate(partition))
    {
        std::cout<< it.second.get() << std::endl;
    }

    return 0;
}