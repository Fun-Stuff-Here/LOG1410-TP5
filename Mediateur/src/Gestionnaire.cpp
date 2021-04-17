#include "GestionnaireProfil.h"

GestionnaireProfil::GestionnaireProfil(ProfilProfesseur *profilProfesseur, ProfilEtudiant *profilEtudiant) 
: profilProfesseur_(profilProfesseur), profilEtudiant_(profilEtudiant)
{
    profilProfesseur_->setMediateur(this);
    profilEtudiant_->setMediateur(this);
}

void GestionnaireProfil::informer(ProfilAbstrait *expediteur, std::string message) const
{
    if (message == "A")
    {
        std::cout << "    Le mediateur met a jour le collegue 2:\n";
        profilEtudiant_->messageD();
    }
    
    if (message == "C")
    {
        std::cout << "    Le mediateur met a jour les collegues 1 et 2:\n";
        profilProfesseur_->messageB();
        profilEtudiant_->messageD();
    }
}