#pragma once

#include "GestionnaireProfil.h"
#include "ProfilAbstrait.h"
#include "ProfilProfesseur.h"
#include "ProfilEtudiant.h"

class GestionnaireProfil : public Gestionnaire
{
    ProfilProfesseur *profilProfesseur_;
    ProfilEtudiant *profilEtudiant_;

public:
    GestionnaireProfil(ProfilProfesseur *profilProfesseur, ProfilEtudiant *profilEtudiant);
    void informer(ProfilAbstrait *expediteur, std::string message) const override;
};