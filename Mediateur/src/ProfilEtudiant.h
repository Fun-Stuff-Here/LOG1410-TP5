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