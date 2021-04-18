// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/Aggregat.h"
#include "../src/Partition.h"
#include "../src/Mock.h"
#include <algorithm>
#include "../cppitertools/enumerate.hpp"

TEST_CASE("Tests pour la classe  Partition", "[Partition]")
{
    NoteMusicale note1{}, note2{}, note3{};
    Partition partition{"partition 1","inconnue"};
    partition.ajouterNote(&note1);
    partition.ajouterNote(&note2);
    partition.ajouterNote(&note3);
    REQUIRE(std::distance(partition.begin(),partition.end()) == 3);

    for (auto&& it : iter::enumerate(partition))
    {
        REQUIRE(partition[it.first].get() == it.second.get());
    }
    
    
}


