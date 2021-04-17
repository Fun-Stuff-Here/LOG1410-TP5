#pragma once

#include "Gestionnaire.h"
#include <iostream>

class ProfilAbstrait
{
protected:
    Gestionnaire *gestionnaire_;

public:
    ProfilAbstrait(Gestionnaire *gestionnaire = nullptr);
    void setMediateur(Gestionnaire *gestionnaire);
    virtual ~ProfilAbstrait() = default;
};