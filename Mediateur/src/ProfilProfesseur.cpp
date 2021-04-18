#include "ProfilProfesseur.h"

void ProfilProfesseur::ajouterEtudiant()
{
    std::cout << "Le professeur ajoute un étudiant a sa liste." << std::endl;
    gestionnaire_->informer(this, "Etudiant ajouté");
}

void ProfilProfesseur::proposerSuivi()
{
    std::cout << "Le professeur aimerait faire un suivi avec l'étudiant qui est en ligne." << std::endl;
    gestionnaire_->informer(this, "Proposition suivi");
}

void ProfilProfesseur::ajouterDevoir()
{
    std::cout << "Le professeur rajoute un devoir" << std::endl;
    gestionnaire_->informer(this, "Nouveau devoir");
}