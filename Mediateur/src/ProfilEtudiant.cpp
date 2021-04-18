#include "ProfilEtudiant.h"

void ProfilEtudiant::enregistrer()
{
    std::cout << "L'étudiant s'est enregistré";
    gestionnaire_->informer(this, "Enregistrement Réussi");
}

void ProfilEtudiant::logInEtudiant()
{
    std::cout << "L'étudiant a ouvert l'application";
    gestionnaire_->informer(this, "L'étudiant est en ligne");
}

void ProfilEtudiant::remettreDevoir()
{
    std::cout << "L'étudiant a remis son devoir";
    gestionnaire_->informer(this, "Devoir remis");
}