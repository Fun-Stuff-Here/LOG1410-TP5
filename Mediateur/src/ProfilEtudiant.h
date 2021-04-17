#pragma once

#include "ProfilAbstrait.h"
#include <iostream>

class ProfilEtudiant : public ProfilAbstrait
{
public:
    void messageC();
    void messageD();
};