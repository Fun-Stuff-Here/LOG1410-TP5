#include "Mock.hpp"

Partition::Partition(std::string nom)
    : nom_{nom}
{
}

std::string Partition::lireNom()
{
    return nom_;
}

void InventairePartition::ajouterPartition(Partition *partition)
{
    auto partitionPtr = std::make_shared<Partition>(*partition);
    partitions_.push_back(partitionPtr);
}

std::shared_ptr<Partition> InventairePartition::chercherPartition(std::string &nom)
{
    std::shared_ptr<Partition> partitionTrouvee = nullptr;
    for (auto &&partition : partitions_)
    {
        if (partition->lireNom() == nom)
            partitionTrouvee = partition;
    }
    return partitionTrouvee;
}
