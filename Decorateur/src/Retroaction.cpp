#include "Retroaction.hpp"


RetroactionAbs::RetroactionAbs(Partition &partition, Enregistrement &enregistrement)
{
    partition_ = std::make_shared<Partition>(partition);
    enregistrement_ = std::make_shared<Enregistrement>(enregistrement);
}

Retroaction::Retroaction(Partition &partition, Enregistrement &enregistrement) : 
    RetroactionAbs(partition, enregistrement)
{
}


std::shared_ptr<Partition> Retroaction::lirePartition()
{
    return partition_;
}

std::shared_ptr<Enregistrement> Retroaction::lireEnregistrement()
{
    return enregistrement_;
}

std::vector<std::unique_ptr<ObjectifApprentissage>>& Retroaction::lireObjectifsApprentissage()
{
    return objectifsApprentissages_;
}

void Retroaction::ajouterObjectifApprentissage(ObjectifApprentissage& objectifApprentissage)
{
    auto objectif = std::make_unique<ObjectifApprentissage>(objectifApprentissage);
    objectifsApprentissages_.push_back(std::move(objectif));
}
