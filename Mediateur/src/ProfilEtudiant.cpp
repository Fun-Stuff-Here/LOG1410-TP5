#include "ProfilEtudiant.h"

void ProfilEtudiant::messageC()
{
    std::cout << "    Le collegue 1 recoit le message A et en informe le mediateur.\n";
    mediateur_->informer(this, "A");
}

void ProfilEtudiant::messageD()
{
    std::cout << "    Le collegue 1 recoit le message B.\n";
}