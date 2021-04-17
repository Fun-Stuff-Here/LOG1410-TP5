///////////////////////////////////////////////////////////////////
// Description: Le vecteur des notes contenues dans une partition
// File VecteurNotesMusicalesPartition.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////

#pragma once

#ifndef NOTES_PARTITION_H
#define NOTES_PARTITION_H

#include "Aggregat.h"

class NotesPartition : public Aggregat<NoteMusicale>
{
    Aggregat &notesPartition_;

public:;
    NoteMusicale &operator[](int index);
    NoteMusicale &operator++(int index);
    NoteMusicale &operator--(int index);

    std::vector<NoteMusicale>::iterator creerIterateur() override;
    std::vector<NoteMusicale>::iterator begin() override;
    std::vector<NoteMusicale>::iterator end() override;

    std::vector<NoteMusicale>::const_iterator creerIterateurConst() const override;
    std::vector<NoteMusicale>::const_iterator cbegin() const override;
    std::vector<NoteMusicale>::const_iterator cend() const override;

    void ajouterNoteMusicale(NoteMusicale note);
};

#endif
