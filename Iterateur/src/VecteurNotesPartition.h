///////////////////////////////////////////////////////////////////
// Description: Le vecteur des notes contenues dans une partition
// File VecteurNotesMusicalesPartition.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////

#pragma once

#ifndef VECTEUR_NOTES_PARTITION_H
#define VECTEUR_NOTES_PARTITION_H

#include "Mock.h"
#include <vector>

class VecteurNotesPartition
{
    using Vecteur = std::vector<NoteMusicale>;
    Vecteur notesPartition_;

public:
    using iterateur = Vecteur::iterator;

    NoteMusicale &operator[](int index);

    /*
    ** L'itérateur permet d'accéder a l'élément et de le modifier si nécessaire
    */
    iterateur creerIterateur();
    iterateur begin();
    iterateur end();
    void ajouterNoteMusicale(NoteMusicale note);
    int size();
};

#endif
