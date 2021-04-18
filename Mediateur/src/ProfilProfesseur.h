#pragma once

#include "ProfilAbstrait.h"
#include <iostream>

class ProfilProfesseur : public ProfilAbstrait
{
public:
    void ajouterEtudiant();
    void proposerSuivi();
    void ajouterDevoir();
};