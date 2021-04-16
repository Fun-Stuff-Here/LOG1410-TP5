#include "ListeNotes.h"

NoteMusicale &ListeNotes::operator[](int index) 
{
    return notesDeMusique_[index];
}

ListeNotes::iterateurConst ListeNotes::creerIterateurConstant()
{
    return notesDeMusique_.cbegin();
}

ListeNotes::iterateurConst ListeNotes::cbegin()
{
    return notesDeMusique_.cbegin();
}

ListeNotes::iterateurConst ListeNotes::cend()
{
    return notesDeMusique_.cend();
}
