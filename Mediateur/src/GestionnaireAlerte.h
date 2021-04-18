#pragma once

#include "Gestionnaire.h"
#include "ProfilProfesseur.h"
#include "ProfilEtudiant.h"

#include <iostream>

class GestionnaireAlerte : public Gestionnaire
{
    ProfilProfesseur *profilProfesseur_;
    ProfilEtudiant *profilEtudiant_;

public:
    GestionnaireAlerte(ProfilProfesseur *profilProfesseur, ProfilEtudiant *profilEtudiant);
    void informer(class ProfilAbstrait *role, std::string message) const override;
};