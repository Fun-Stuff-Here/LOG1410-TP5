/////////////////////////////////////////////////////////////////////////
// Description: Un profil concret qui encapsule les action d'un étudiant 
// File Partition.h
// Auteur : Nicolas Depelteau & Esme Genereux
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "ProfilAbstrait.h"
#include <iostream>

class ProfilEtudiant : public ProfilAbstrait
{
public:
    void enregistrer();
    void logInEtudiant();
    void remettreDevoir();
};