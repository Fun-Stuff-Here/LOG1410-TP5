#include <iostream>
#include <assert.h>
#include "Partition.h"
#include "Mock.h"
#include "../cppitertools/enumerate.hpp"

int main()
{
    NoteMusicale note1{}, note2{}, note3{};        // 1. Créer 3 notes musicales
    Partition partition{"partition 1", "inconnu"}; // 2. On initialise une partition
    std::cout << "Creation de la partition : " << partition.lireNom()
              << " du fameux auteur : " << partition.lireAuteur() << std::endl;
    partition.ajouterNote(&note1);
    partition.ajouterNote(&note2);
    partition.ajouterNote(&note3); // 3. On ajoute les 3 notes a la partition

    std::cout << "La partition contient les notes aux adresses suivante : " << std::endl;
    for (auto &&note : partition)
    {
        std::cout << note.get() << std::endl;
    }
}