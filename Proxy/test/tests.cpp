// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/BaseDonnees.h"

TEST_CASE("Tests pour la classe BaseDonneeClient", "[BaseDonneeClient]")
{
    std::string hostname = "godaddy.com";
    BaseDonneeServer baseDonneeServer;
    BaseDonneeClient baseDeDonnees{hostname, &baseDonneeServer};

    std::string nomPartition = "yeye";
    Partition partition{nomPartition};
    InventairePartition inventaire;
    inventaire.ajouterPartition(&partition);

    baseDeDonnees.renouvlerInventaire(&inventaire);

    REQUIRE(baseDeDonnees.chercherPartition(nomPartition)->lireNom() == nomPartition);
}
