#include "NotesPartition.h"

NoteMusicale &NotesPartition::operator[](int index)
{
    return notesPartition_[index];
}

NoteMusicale &NotesPartition::operator++(int index)
{
    return notesPartition_[++index];
}

NoteMusicale &NotesPartition::operator--(int index)
{
    return notesPartition_[--index];
}

std::vector<NoteMusicale>::iterator NotesPartition::creerIterateur()
{
    return notesPartition_.begin();
}

std::vector<NoteMusicale>::iterator NotesPartition::begin()
{
    return notesPartition_.begin();
}

std::vector<NoteMusicale>::iterator NotesPartition::end()
{
    return notesPartition_.end();
}

std::vector<NoteMusicale>::const_iterator NotesPartition::creerIterateurConst() const
{
    return notesPartition_.cbegin();
}

std::vector<NoteMusicale>::const_iterator NotesPartition::cbegin() const
{
    return notesPartition_.cbegin();
}

std::vector<NoteMusicale>::const_iterator NotesPartition::cend() const
{
    return notesPartition_.cend();
}

void NotesPartition::ajouterNoteMusicale(NoteMusicale note)
{
    notesPartition_.push_back(note);
}
