#pragma once

#include "ProfilAbstrait.h"
#include <iostream>

class ProfilProfesseur : public ProfilAbstrait
{
public:
    void messageA();
    void messageB();
};