#pragma once

#include "Mediateur.h"
#include "ProfilAbstrait.h"
#include "ProfilProfesseur.h"
#include "ProfilEtudiant.h"

class MediateurConcret : public Mediateur
{
    ProfilProfesseur *profilProfesseur_;
    ProfilEtudiant *profilEtudiant_;

public:
    MediateurConcret(ProfilProfesseur *profilProfesseur, ProfilEtudiant *profilEtudiant);
    void informer(ProfilAbstrait *expediteur, std::string message) const override;
};