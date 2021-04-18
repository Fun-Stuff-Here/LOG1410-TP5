#include "Partition.h"

Partition::Partition(const std::string& nom,const std::string& auteur) 
: auteur_(auteur),nom_(nom) {}

//SURCHARGE OPERATEUR-----------------------------------------------------------
Partition::NoteMusicalePtr & Partition::operator[](size_t index)
{
    return notesDeMusique_[index];
}

//ITERATEUR NON_CONST-----------------------------------------------------------
Partition::Iterateur Partition::creerIterateur()
{
    return begin();
}
Partition::Iterateur Partition::begin()
{
    return notesDeMusique_.begin();
}
Partition::Iterateur Partition::end()
{
    return notesDeMusique_.end();
}

//ITERATEUR CONST---------------------------------------------------------------
Partition::cIterateur Partition::creerIterateurConst() const
{
    return cbegin();
}
Partition::cIterateur Partition::cbegin() const
{
    return notesDeMusique_.cbegin();
}
Partition::cIterateur Partition::cend() const
{
    return notesDeMusique_.cend();
}

//AUTRES FONCTIONS---------------------------------------------------------------
void Partition::ajouterNote(NoteMusicale* note)
{
    notesDeMusique_.emplace_back(std::make_shared<NoteMusicale>(*note));
}

std::string Partition::lireAuteur() const
{
    return auteur_;
}
std::string Partition::lireNom() const
{
    return nom_;
}