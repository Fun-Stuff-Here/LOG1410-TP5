#pragma once

#include <string>

class Mediateur
{
public:
  virtual void informer(class ProfilAbstrait *expediteur, std::string message) const = 0;
};
