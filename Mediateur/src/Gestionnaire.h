#pragma once

#include <string>

class Gestionnaire
{
public:
  virtual void informer(class ProfilAbstrait *expediteur, std::string message) const = 0;
};
