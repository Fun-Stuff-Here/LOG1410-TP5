#include <iostream>
#include <assert.h>
#include "ElementsAnalyse.hpp"
#include "Retroaction.hpp"

int main()
{
    // 1. Initialiser une partitition, un enregistrement et une rétroaction non décorée
    Partition partition{};
    Enregistrement enregistrement{};
    Retroaction retroaction{partition, enregistrement};
    std::cout << "Creation de la retroaction" << std::endl;
    
    // 2. On décore la rétroaction d'un commentaire
    std::string commentaire = "Tres belle execution";
    CommentaireConstructif retroactionAvecCommentaire{&retroaction, commentaire};
    std::cout << "Retroaction decoree avec le commentaire : " << retroactionAvecCommentaire.lireCommentaire() << std::endl;

    // 3. On décore la rétroaction d'un code de couleur
    CodeCouleurLogique retroactionAvecCouleurETComentaire{&retroactionAvecCommentaire};
    std::cout << "Retroaction decoree avec le code de couleur : " << std::endl;
    for (std::string couleur: retroactionAvecCouleurETComentaire.lireCouleurs())
    {
        std::cout<<couleur<<std::endl;
    }
}