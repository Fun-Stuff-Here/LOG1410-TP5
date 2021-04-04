/////////////////////////////////////////////////////////////////
// Description: Definition des classe relie aux bases de donnees
// File BaseDonnees.h
// Auteur : Esme Genereux & Nicolas Depelteau
/////////////////////////////////////////////////////////////////
#pragma once
#ifndef BASEDONNEE_H
#define BASEDONNEE_H

#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <iostream>
#include <memory>

#include "Mock.hpp"

class IBaseDonnee
{
public:
   virtual ~IBaseDonnee() = default;

   virtual std::shared_ptr<Partition> chercherPartition(std::string &nom) = 0;
   virtual void renouvlerInventaire(InventairePartition *inventaire) = 0;
};

class BaseDonneeServer : public IBaseDonnee
{
private:
   std::vector<std::unique_ptr<InventairePartition>> inventairesPartitions_;

public:
   BaseDonneeServer() = default;
   ~BaseDonneeServer() = default;

   std::shared_ptr<Partition> chercherPartition(std::string &nom) override;
   void renouvlerInventaire(InventairePartition *inventaire) override;
};

class BaseDonneeClient : public IBaseDonnee
{
private:
   std::string hostname_;
   //pour simuler la connexion avec le serveur ce pointeur sera le lien etablie
   BaseDonneeServer *baseDonneeServer_;

public:
   BaseDonneeClient(std::string &hostname, BaseDonneeServer *baseDonneeServer);
   ~BaseDonneeClient() = default;

   std::shared_ptr<Partition> chercherPartition(std::string &nom) override;
   void renouvlerInventaire(InventairePartition *inventaire) override;
};

#endif // !BASEDONNEE