///////////////////////////////////////////////////////////////
// Description: Definition des classe relie a la retroaction
// File Retroaction.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////
#pragma once
#ifndef RETROACTION_H
#define RETROACTION_H

#include "Mocks.hpp"
#include <memory>
#include <vector>

class RetroactionAbs
{
protected:
    using EnregistrementPtr = std::shared_ptr<Enregistrement>;
    using ListeObjectifs = std::vector<std::unique_ptr<ObjectifApprentissage>>;
    using PartitionPtr = std::shared_ptr<Partition>;


protected:
    EnregistrementPtr enregistrement_;
    ListeObjectifs objectifsApprentissages_;
    PartitionPtr partition_;

public:
    RetroactionAbs() = default;
    RetroactionAbs(Partition &partition, Enregistrement &enregistrement);
    virtual ~RetroactionAbs() = default;

    virtual void ajouterObjectifApprentissage(ObjectifApprentissage &objectifApprentissage) = 0;
    virtual EnregistrementPtr lireEnregistrement() = 0;
    virtual PartitionPtr lirePartition() = 0;
    virtual ListeObjectifs &lireObjectifsApprentissage() = 0;
};

class Retroaction : public RetroactionAbs
{
public:
    Retroaction(Partition &partition, Enregistrement &enregistrement);
    void ajouterObjectifApprentissage(ObjectifApprentissage &objectifApprentissage) override;
    EnregistrementPtr lireEnregistrement() override;
    PartitionPtr lirePartition() override;
    ListeObjectifs &lireObjectifsApprentissage() override;
    virtual ~Retroaction() = default;
};

#endif // !RETROACTION_H