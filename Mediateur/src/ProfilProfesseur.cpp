#include "ProfilProfesseur.h"

void ProfilProfesseur::messageA()
{
    std::cout << "    Le collegue 1 recoit le message A et en informe le mediateur.\n";
    gestionnaire_->informer(this, "A");
}

void ProfilProfesseur::messageB()
{
    std::cout << "    Le collegue 1 recoit le message B.\n";
}