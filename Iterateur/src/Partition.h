//////////////////////////////////////////////////////////////////
// Description: La liste des notes musicales qui existent
// File PartitionMusicales.h
// Auteur : Esme Genereux & Nicolas Depelteau
//////////////////////////////////////////////////////////////////

#pragma once

#ifndef PARTITION_H
#define PARTITION_H

#include "Mock.h"
#include <vector>
#include <memory>
#include <string>


class Partition
{


public:
    using NoteMusicalePtr = std::shared_ptr<NoteMusicale>;
    using Iterateur = std::vector<NoteMusicalePtr>::iterator;
    using cIterateur = std::vector<NoteMusicalePtr>::const_iterator;

    Partition(const std::string& nom, const std::string& auteur);
    ~Partition() = default;

    NoteMusicalePtr &operator[](size_t index);
    void ajouterNote(NoteMusicale* note); 

    Iterateur creerIterateur();
    Iterateur begin();
    Iterateur end();

    cIterateur creerIterateurConst() const;
    cIterateur cbegin() const;
    cIterateur cend() const;

    std::string lireAuteur() const;
    std::string lireNom() const;

private:
    std::vector<NoteMusicalePtr> notesDeMusique_;
    std::string auteur_;
    std::string nom_;

};

#endif
