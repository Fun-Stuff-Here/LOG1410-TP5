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