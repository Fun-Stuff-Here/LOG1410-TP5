//////////////////////////////////////////////////////////////////
// Description: profil abstrait permet de modifier le gestionnaire
// File Partition.h
// Auteur : Nicolas Depelteau & Esme Genereux
//////////////////////////////////////////////////////////////////

#pragma once

#include "Gestionnaire.h"

class ProfilAbstrait
{
protected:
    Gestionnaire *gestionnaire_;

public:
    ProfilAbstrait(Gestionnaire *gestionnaire = nullptr);
    void setGestionnaire(Gestionnaire *gestionnaire);
    virtual ~ProfilAbstrait() = default;
};