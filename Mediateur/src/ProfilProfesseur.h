/////////////////////////////////////////////////////////////////////////
// Description: profil concret qui encapsule les actions d'un professeur
// File Partition.h
// Auteur : Nicolas Depelteau & Esme Genereux
/////////////////////////////////////////////////////////////////////////

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