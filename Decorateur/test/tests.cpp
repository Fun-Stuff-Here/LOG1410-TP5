// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/ElementsAnalyse.hpp"
#include "../boost/di.hpp"
#include "../src/Retroaction.hpp"
#include <string>
#include <vector>

TEST_CASE("Tests pour la classe CommentaireConstructif", "[CommentaireConstructif]")
{
    // 1. Initialiser une partitition, un enregistrement et une rétroaction non décorée
    std::string commentaire = "Tres belle execution";
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition, enregistrement};
    
    // 2. On décore la rétroaction d'un commentaire
    CommentaireConstructif retroactionAvecCommentaire{&retroaction, commentaire};

    // 3. On vérifie que la rétroaction possède un commentaire
    REQUIRE(retroactionAvecCommentaire.lireCommentaire() == commentaire);
}

TEST_CASE("Tests pour la classe CodeCouleurLogique", "[CodeCouleurLogique]")
{
    // 1. Initialiser des couleurs, une partitition, un enregistrement et une rétroaction non décorée
    std::vector<std::string> couleurs = {"Vert", "Jaune", "Rouge"};
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition, enregistrement};

    // 2. On décore la rétroaction de couleurs
    CodeCouleurLogique retroactionAvecCouleur{&retroaction};

    // 3. On vérifie que la rétroaction possède un code de couleurs
    REQUIRE(retroactionAvecCouleur.lireCouleurs() == couleurs);
}

TEST_CASE("Tests pour la classe Retroaction pour vérifier si elle garde sa partition", "[Retroaction]")
{
    // 1. Initialiser un commentaire, une partitition, un enregistrement et une rétroaction non décorée
    std::string commentaire = "Tres belle execution";
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition, enregistrement};

    // 2. vérifie le pointeur de la partition originale
    auto originale = retroaction.lirePartition().get();
    CommentaireConstructif retroactionAvecCommentaire{&retroaction, commentaire};

    // 3. vérifier le pointeur de la partition décorée 1 fois et 2 fois
    auto decorerUneFois = retroactionAvecCommentaire.lirePartition().get();
    CodeCouleurLogique retroactionAvecCouleurETComentaire{&retroactionAvecCommentaire};
    auto decorerDeuxFois = retroactionAvecCouleurETComentaire.lirePartition().get();

    // 4. vérifie que les pointeurs des partition non décorée, décorée 1 fois et décorée 2 fois sont les mêmes
    REQUIRE(((originale == decorerUneFois) && (originale == decorerDeuxFois)));
}