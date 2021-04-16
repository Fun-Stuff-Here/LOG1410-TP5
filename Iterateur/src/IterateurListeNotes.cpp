#include "IterateurListeNotesMusicales.h"

IterateurListeNotes::IterateurListeNotes(ListeNotes &listeNotes, int position)
    : listeNotes_(listeNotes), position_(position) {}

IterateurListeNotes &IterateurListeNotes::operator[](int index)
{
}

IterateurListeNotes IterateurListeNotes::getCurrent()
{
}

IterateurListeNotes IterateurListeNotes::getPrevious()
{
}

IterateurListeNotes IterateurListeNotes::getNext()
{
}

bool IterateurListeNotes::hasMore()
{
}
