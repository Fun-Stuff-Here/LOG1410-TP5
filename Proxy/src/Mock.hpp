///////////////////////////////////////////////////////////////////
// Description: Definition des classe mock pour les dependences
// File Mocks.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////
#pragma once
#ifndef MOCKS_H
#define MOCKS_H

#include <vector>
#include <memory>
#include <string>

class Partition
{
private:
    std::string nom_;

public:
    Partition(std::string nom);
    ~Partition() = default;
    std::string lireNom();
};

class InventairePartition
{
private:
    std::vector<std::shared_ptr<Partition>> partitions_;

public:
    InventairePartition() = default;
    void ajouterPartition(Partition *partition);
    std::shared_ptr<Partition> chercherPartition(std::string &nom);
    ~InventairePartition() = default;
};

#endif // !MOCKS_H