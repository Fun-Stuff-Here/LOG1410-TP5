///////////////////////////////////////////////////////////////////////////
// Description: Itere < travaers la liste des notes musicales qui existent
// File VecteurNotesMusicalesPartition.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////////////

#pragma once
#include "ListeNotes.h"
#include "Mock.h"

class IterateurListeNotes
{
    ListeNotes &listeNotes_;
    int position_;

public:
    IterateurListeNotes(ListeNotes &listeNotes, int position);

    IterateurListeNotes&operator[](int index); //getter for this shit, make it work

    IterateurListeNotes getCurrent();
    IterateurListeNotes getPrevious();
    IterateurListeNotes getNext();
    
    bool hasMore();
};