// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "../src/GestionnaireAlerte.h"
#include "../src/ProfilEtudiant.h"
#include "../src/ProfilProfesseur.h"

TEST_CASE("Tests pour l'echange d'information entre le professeur et l'etudiant", "[GestionnaireAlerte]")
{
    // Redirect cout to our stringstream
    std::stringstream buffer;
    std::streambuf *sbuf = std::cout.rdbuf();
    std::cout.rdbuf(buffer.rdbuf());

    // Tests
    std::string expected =
        "L'étudiant s'est enregistré\n"
        "L'étudiant a ouvert l'application\n"
        "Le professeur contacte l'étudiant pour faire un suivi\n"
        "Le professeur aimerait faire un suivi avec l'étudiant qui est en ligne.\n"
        "L'étudiant peut accepter ou non de rencontrer le professeur\n"
        "Le professeur rajoute un devoir\n"
        "L'étudiant complète son devoir\n"
        "L'étudiant a remis son devoir\n"
        "Le professeur peut donner une rétroaction sur la performance musicale de l'étudiant\n";

    ProfilProfesseur professeur1{};
    ProfilEtudiant etudiant1{};
    GestionnaireAlerte GestionnaireAlerte{&professeur1, &etudiant1};

    etudiant1.enregistrer();

    etudiant1.logInEtudiant();

    professeur1.ajouterDevoir();

    std::string text = buffer.str();
    std::cout.rdbuf(sbuf);

    REQUIRE(text == expected);
}
