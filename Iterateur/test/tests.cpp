/*
** Test patron itérateur
*/

#define CATCH_CONFIG_MAIN // Lets Catch provide main()

#include "catch.hpp"
#include "../src/Partition.h"
#include "../src/Mock.h"
#include <algorithm>
#include "../cppitertools/enumerate.hpp"

TEST_CASE("Tests pour la classe  Partition", "[Partition]")
{
    NoteMusicale note1{}, note2{}, note3{};         // 1. Créer 3 notes musicales
    Partition partition{"partition 1", "inconnue"}; // 2. On initialise une partition
    partition.ajouterNote(&note1);
    partition.ajouterNote(&note2);
    partition.ajouterNote(&note3);                                   // 3. On ajoute les 3 notes a la partition
    REQUIRE(std::distance(partition.begin(), partition.end()) == 3); // 4. vérifier qu'il y a 3 notes dans la partition

    // 5. Vérifier que l'élément d'une partition a un index donné correspond a l'élément de l'itérateur
    for (auto &&it : iter::enumerate(partition))
    {
        REQUIRE(partition[it.first].get() == it.second.get());
    }
}
