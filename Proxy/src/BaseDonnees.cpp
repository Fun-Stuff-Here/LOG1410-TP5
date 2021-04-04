#include "BaseDonnees.h"

BaseDonneeClient::BaseDonneeClient(std::string &hostname, BaseDonneeServer *baseDonneeServer)
    : hostname_{hostname}, baseDonneeServer_{baseDonneeServer}
{
}

std::shared_ptr<Partition> BaseDonneeClient::chercherPartition(std::string &nom)
{
    /* code pour la connection et la querry*/
    return baseDonneeServer_->chercherPartition(nom);
}

void BaseDonneeClient::renouvlerInventaire(InventairePartition *inventaire)
{
    /* code pour la connection et la querry*/
    baseDonneeServer_->renouvlerInventaire(inventaire);
}

void BaseDonneeServer::renouvlerInventaire(InventairePartition *inventaire)
{
    auto inventairePtr = std::make_unique<InventairePartition>(*inventaire);
    inventairesPartitions_.push_back(std::move(inventairePtr));
}

std::shared_ptr<Partition> BaseDonneeServer::chercherPartition(std::string &nom)
{
    for (auto &&inventaire : inventairesPartitions_)
    {
        if (inventaire->chercherPartition(nom))
            return inventaire->chercherPartition(nom);
    }
    return nullptr;
}
