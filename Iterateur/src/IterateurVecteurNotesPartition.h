/////////////////////////////////////////////////////////////////////
// Description: Itere a travers le vecteur des notes d'une partition
// File VecteurNotesMusicalesPartition.h
// Auteur : Esme Genereux & Nicolas Depelteau
////////////////////////////////////////////////////////////////////

#pragma once
#include "VecteurNotesPartition.h"
#include "Mock.h"

class IterateurVecteurNotesPartition
{
    VecteurNotesPartition &vecteurNotesPartition_;
    int position_;

public:
    IterateurVecteurNotesPartition(VecteurNotesPartition &vecteurNotesPartition, int position);

    NoteMusicale getCurrent();
    VecteurNotesPartition::iterateur getPrevious();
    VecteurNotesPartition::iterateur getNext();
    bool hasMore();
};
