//////////////////////////////////////////////////////////////////
// Description: La liste des notes musicales qui existent
// File ListeNotesMusicales.h
// Auteur : Esme Genereux & Nicolas Depelteau
//////////////////////////////////////////////////////////////////

#pragma once

#ifndef LISTE_NOTES_H
#define LISTE_NOTES_H

#include "Aggregat.h"

class ListeNotes : public Aggregat<NoteMusicale>
{
    Aggregat &notesDeMusique_;

public:;
    NoteMusicale &operator[](int index) const;
    NoteMusicale &operator++(int index) const;
    NoteMusicale &operator--(int index) const;

    std::vector<NoteMusicale>::const_iterator creerIterateurConst() const override;
    std::vector<NoteMusicale>::const_iterator cbegin() const override;
    std::vector<NoteMusicale>::const_iterator cend() const override;
};

#endif
