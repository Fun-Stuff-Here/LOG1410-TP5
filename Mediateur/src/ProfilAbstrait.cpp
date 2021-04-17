#include "ProfilAbstrait.h"

ProfilAbstrait::ProfilAbstrait(Mediateur *mediateur) : mediateur_(mediateur) {}

void ProfilAbstrait::setMediateur(Mediateur *mediateur)
{
    mediateur_ = mediateur;
}