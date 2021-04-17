#pragma once

#include "Mediateur.h"
#include <iostream>

class ProfilAbstrait
{
protected:
    Mediateur *mediateur_;

public:
    ProfilAbstrait(Mediateur *mediateur = nullptr);
    void setMediateur(Mediateur *mediateur);
    virtual ~ProfilAbstrait() = default;
};