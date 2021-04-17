#include "ListeNotes.h"

NoteMusicale &ListeNotes::operator[](int index)
{
    return notesDeMusique_[index];
}

NoteMusicale &ListeNotes::operator++(int index)
{
    return notesDeMusique_[++index];
}

NoteMusicale &ListeNotes::operator--(int index)
{
    return notesDeMusique_[--index];
}

std::vector<NoteMusicale>::const_iterator ListeNotes::creerIterateurConst() const
{
    return notesDeMusique_.begin();
}

std::vector<NoteMusicale>::const_iterator ListeNotes::cbegin() const
{
    return notesDeMusique_.begin();
}

std::vector<NoteMusicale>::const_iterator ListeNotes::cend() const
{
    return notesDeMusique_.end();
}
