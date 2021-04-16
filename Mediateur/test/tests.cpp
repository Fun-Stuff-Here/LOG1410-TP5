// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"


TEST_CASE("Tests pour la classe ClientDeBaseDeDonnees", "[BaseDeDonnees]")
{
    BaseDeDonneesMock baseDeDonnees;
    ClientDeBaseDeDonnees client(baseDeDonnees);
    REQUIRE(client.populationTotal({"alpha", "beta", "gamma"}) == 6);
}
