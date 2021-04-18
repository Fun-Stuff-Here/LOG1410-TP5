///////////////////////////////////////////////////////////////////
// Description: Le vecteur des notes contenues dans une partition
// File VecteurNotesMusicalesPartition.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////

#pragma once

#ifndef NOTES_PARTITION_H
#define NOTES_PARTITION_H

#include "Mock.h"
#include <vector>

// #include "Aggregat.h"

class NotesPartition // public Aggregat<NoteMusicale>
{
    std::vector<NoteMusicale> notesPartition_;

public:;
    NoteMusicale &operator[](int index);
    NoteMusicale &operator++(int index);
    NoteMusicale &operator--(int index);

    std::vector<NoteMusicale>::iterator creerIterateur();
    std::vector<NoteMusicale>::iterator begin();
    std::vector<NoteMusicale>::iterator end();

    std::vector<NoteMusicale>::const_iterator creerIterateurConst() const;
    std::vector<NoteMusicale>::const_iterator cbegin() const;
    std::vector<NoteMusicale>::const_iterator cend() const;

    void ajouterNoteMusicale(NoteMusicale note);
};

#endif
