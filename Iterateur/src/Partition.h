//////////////////////////////////////////////////////////////////
// Description: La liste des notes musicales d'une partition
// File Partition.h
// Auteur : Nicolas Depelteau & Esme Genereux
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

    Partition(const std::string &nom, const std::string &auteur);
    ~Partition() = default;

    // Surcharge opérateur
    NoteMusicalePtr &operator[](size_t index);

    // Un itérateur permet d'accéder aux éléments 
    Iterateur creerIterateur();
    Iterateur begin();
    Iterateur end();

    // Un itérateur constant permet d'accéder aux éléments sans les modifiers
    cIterateur creerIterateurConst() const;
    cIterateur cbegin() const;
    cIterateur cend() const;
    
    // autres fonctions pertinentes
    void ajouterNote(NoteMusicale *note);
    std::string lireAuteur() const;
    std::string lireNom() const;

private:
    std::vector<NoteMusicalePtr> notesDeMusique_;
    std::string auteur_;
    std::string nom_;
};

#endif
