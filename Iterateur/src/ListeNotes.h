//////////////////////////////////////////////////////////////////
// Description: La liste des notes musicales qui existent
// File ListeNotesMusicales.h
// Auteur : Esme Genereux & Nicolas Depelteau
//////////////////////////////////////////////////////////////////

#pragma once

#ifndef LISTE_NOTES_H
#define LISTE_NOTES_H

#include "Mock.h"
#include <vector>

// #include "Aggregat.h"

class ListeNotes // public Aggregat<NoteMusicale>
{
    std::vector<NoteMusicale> notesDeMusique_;

public:;
    NoteMusicale &operator[](int index);
    NoteMusicale &operator++(int index);
    NoteMusicale &operator--(int index);

    std::vector<NoteMusicale>::const_iterator creerIterateurConst() const;
    std::vector<NoteMusicale>::const_iterator cbegin() const;
    std::vector<NoteMusicale>::const_iterator cend() const;
};

#endif
