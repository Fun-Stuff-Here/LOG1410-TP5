// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/VecteurNotesPartition.h"
#include "../src/IterateurVecteurNotesPartition.h"
#include "../src/ListeNotes.h"
#include "../src/IterateurListeNotes.h"

TEST_CASE("Tests pour la classe  ListeNotes", "[ListeNotes]")
{
    Partition partition{};
    NoteMusicale A, B, C, D, E, F, G;
    ListeNotes listeNotes = {A, B, C, D, E, F, G};
    
}

TEST_CASE("Tests pour la classe  IterateurListeNotes", "[IterateurListeNotes]")
{

}

TEST_CASE("Tests pour la classe  VecteurNotesPartition", "[VecteurNotesPartition]")
{
    
}

TEST_CASE("Tests pour la classe  IterateurNotePartition", "[IterateurNotePartition]")
{
}