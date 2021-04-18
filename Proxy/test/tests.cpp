// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/BaseDonnees.h"

TEST_CASE("Tests pour la classe BaseDonneeClient", "[BaseDonneeClient]")
{
    // 1. Initialiser la base de donnee serveur et client
    std::string hostname = "godaddy.com";
    BaseDonneeServer baseDonneeServer;
    BaseDonneeClient baseDeDonnees{hostname, &baseDonneeServer};

    // 2. Initialiser une partition et un inventaire de partitions
    std::string nomPartition = "yeye";
    Partition partition{nomPartition};
    InventairePartition inventaire;
    inventaire.ajouterPartition(&partition);
    baseDeDonnees.renouvlerInventaire(&inventaire);

    // 3. vérifier que la partition se trouve dans l'inventaire
    REQUIRE(baseDeDonnees.chercherPartition(nomPartition)->lireNom() == nomPartition);
}
