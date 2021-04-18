#include <iostream>
#include <assert.h>
#include "BaseDonnees.h"
#include "Mock.hpp"

int main()
{
    // 1. Initialiser la base de donnee serveur et client
    std::string hostname = "godaddy.com";
    BaseDonneeServer baseDonneeServer;
    BaseDonneeClient baseDeDonnees{hostname, &baseDonneeServer};
    std::cout << "Creation de la base de donnees client" << std::endl;

    // 2. Initialiser une partition et un inventaire de partitions
    std::string nomPartition = "yeye";
    Partition partition{nomPartition};
    InventairePartition inventaire;
    inventaire.ajouterPartition(&partition);
    baseDeDonnees.renouvlerInventaire(&inventaire);
    std::cout << "Ajout d'un inventaire de partition avec Nom: " << nomPartition << std::endl;
    std::cout << "Lecture du nom de la partition sur la base de donnee Nom :" << baseDeDonnees.chercherPartition(nomPartition)->lireNom() << std::endl;
}