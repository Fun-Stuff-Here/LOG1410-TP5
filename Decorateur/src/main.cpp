#include <iostream>
#include <assert.h>
#include "ElementsAnalyse.hpp"
#include "Retroaction.hpp"

int main()
{

    std::string commentaire = "Tres belle execution";
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition, enregistrement};
    std::cout << "Creation de la retroaction" << std::endl;

    CommentaireConstructif retroactionAvecCommentaire{&retroaction, commentaire};
    std::cout << "Retroaction decoree avec le commentaire : " << retroactionAvecCommentaire.lireCommentaire() << std::endl;

    CodeCouleurLogique retroactionAvecCouleurETComentaire{&retroactionAvecCommentaire};
    std::cout << "Retroaction decoree avec le code de couleur : " << std::endl;
    for (std::string couleur: retroactionAvecCouleurETComentaire.lireCouleurs())
    {
        std::cout<<couleur<<std::endl;
    }

    return 0;
}