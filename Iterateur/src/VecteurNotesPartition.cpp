#include "VecteurNotesPartition.h"

NoteMusicale &VecteurNotesPartition::operator[](int index)
{
    return notesPartition_[index];
}

VecteurNotesPartition::iterateur VecteurNotesPartition::creerIterateur()
{
    return notesPartition_.begin();
}

VecteurNotesPartition::iterateur VecteurNotesPartition::begin()
{
    return notesPartition_.begin();
}

VecteurNotesPartition::iterateur VecteurNotesPartition::end()
{
    return notesPartition_.end();
}

void VecteurNotesPartition::ajouterNoteMusicale(NoteMusicale note)
{
    notesPartition_.push_back(note);
}

int VecteurNotesPartition::size()
{
    return notesPartition_.size();
}
