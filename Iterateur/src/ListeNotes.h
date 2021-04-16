//////////////////////////////////////////////////////////////////
// Description: La liste des notes musicales qui existent
// File ListeNotesMusicales.h
// Auteur : Esme Genereux & Nicolas Depelteau
//////////////////////////////////////////////////////////////////

#pragma once

#ifndef LISTE_NOTES_H
#define LISTE_NOTES_H

#include "Mock.h"

class ListeNotes 
{
    using Liste = std::array<NoteMusicale, 7>;
    Liste notesDeMusique_;

public:
    using iterateurConst = Liste::const_iterator;

    NoteMusicale &operator[](int index);

    /*
    ** L'itérateur constant permet d'accéder a l'élément sans le modifier
    */
    iterateurConst creerIterateurConstant();
    iterateurConst cbegin();
    iterateurConst cend();
};

#endif
