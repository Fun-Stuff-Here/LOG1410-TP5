#include "GestionnaireAlerte.h"

GestionnaireAlerte::GestionnaireAlerte(ProfilProfesseur *profilProfesseur, ProfilEtudiant *profilEtudiant)
    : profilProfesseur_(profilProfesseur), profilEtudiant_(profilEtudiant)
{
    profilProfesseur_->setGestionnaire(this);
    profilEtudiant_->setGestionnaire(this);
}

//Gestionnaire des alertes entre professeur et étudiant------------------------------------------------------------------
void GestionnaireAlerte::informer(class ProfilAbstrait *role, std::string message) const
{
    if (message == "Enregistrement réussi")
    {
        std::cout << "Le professeur ajoute un étudiant a sa liste" << std::endl;
        profilProfesseur_->ajouterEtudiant();
    }
    else if (message == "Etudiant ajouté")
        std::cout << "L'étudiant peut accéder a son compte" << std::endl;

    else if (message == "L'étudiant est en ligne")
    {
        std::cout << "Le professeur contacte l'étudiant pour faire un suivi" << std::endl;
        profilProfesseur_->proposerSuivi();
    }
    else if (message == "Proposition suivi")
        std::cout << "L'étudiant peut accepter ou non de rencontrer le professeur" << std::endl;

    else if (message == "Nouveau devoir")
    {
        std::cout << "L'étudiant complète son devoir" << std::endl;
        profilEtudiant_->remettreDevoir();
    }
    else if (message == "Devoir remis")
        std::cout << "Le professeur peut donner une rétroaction sur la performance musicale de l'étudiant" << std::endl;
}