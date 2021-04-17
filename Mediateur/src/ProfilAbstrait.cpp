#include "ProfilAbstrait.h"

ProfilAbstrait::ProfilAbstrait(Gestionnaire *gestionnaire) : gestionnaire_(gestionnaire) {}

void ProfilAbstrait::setGestionnaire(Gestionnaire *gestionnaire)
{
    gestionnaire_ = gestionnaire;
}