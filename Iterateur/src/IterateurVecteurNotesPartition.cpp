#include "IterateurVecteurNotesPartition.h"

IterateurVecteurNotesPartition::IterateurVecteurNotesPartition(VecteurNotesPartition &vecteurNotesPartition, int position)
    : vecteurNotesPartition_(vecteurNotesPartition), position_(position) {}

NoteMusicale IterateurVecteurNotesPartition::getCurrent()
{
    return vecteurNotesPartition_[++position_];
}

VecteurNotesPartition::iterateur IterateurVecteurNotesPartition::getNext()
{
    if (hasMore())
    {
        ++position_;
        return vecteurNotesPartition_.creerIterateur();  
    }
}

VecteurNotesPartition::iterateur IterateurVecteurNotesPartition::getPrevious()
{
    if (hasMore())
        --position_;
        return vecteurNotesPartition_.creerIterateur();
}

bool IterateurVecteurNotesPartition::hasMore()
{
    return position_ < vecteurNotesPartition_.size();
}
