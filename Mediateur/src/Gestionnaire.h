//////////////////////////////////////////////////////////////////
// Description: L'interface gestionnaire
// File Partition.h
// Auteur : Nicolas Depelteau & Esme Genereux
//////////////////////////////////////////////////////////////////

#pragma once

#include <string>

class Gestionnaire
{
public:
  virtual void informer(class ProfilAbstrait *role, std::string message) const = 0;
};
