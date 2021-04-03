// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/ElementsAnalyse.hpp"
#include "../boost/di.hpp"
#include "../src/Retroaction.hpp"
#include <string>
#include <vector>

namespace di = boost::di;


TEST_CASE("Tests pour la classe CommentaireConstructif", "[CommentaireConstructif]")
{
    std::string commentaire = "Tres belle execution";
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition,enregistrement};
    CommentaireConstructif retroactionAvecCommentaire{&retroaction,commentaire};

    REQUIRE(retroactionAvecCommentaire.lireCommentaire()==commentaire);
}


TEST_CASE("Tests pour la classe CodeCouleurLogique", "[CodeCouleurLogique]")
{
    std::vector<std::string> couleurs = {"Vert","Jaune","Rouge"};
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition,enregistrement};
    CodeCouleurLogique retroactionAvecCouleur{&retroaction};
    REQUIRE(retroactionAvecCouleur.lireCouleurs()==couleurs);
}

TEST_CASE("Tests pour la classe Retroaction si elle garde son identifiant une fois decorer", "[Retroaction]")
{
    std::string commentaire = "Tres belle execution";
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition,enregistrement};
    auto originale = retroaction.lirePartition().get();
    CommentaireConstructif retroactionAvecCommentaire{&retroaction,commentaire};
    auto decorerUneFois = retroactionAvecCommentaire.lirePartition().get();
    CodeCouleurLogique retroactionAvecCouleurETComentaire{&retroactionAvecCommentaire};
    auto decorerDeuxFois = retroactionAvecCouleurETComentaire.lirePartition().get();
    REQUIRE(((originale==decorerUneFois) && (originale==decorerDeuxFois)));
}