///////////////////////////////////////////////////////////////////
// Description: Definition des classe relie aux elements d'analyse
// File ElementsAnalyse.h
// Auteur : Esme Genereux & Nicolas Depelteau
///////////////////////////////////////////////////////////////////

#pragma once
#ifndef ELEMENTSANALYSE_H
#define ELEMENTSANALYSE_H

#include "Retroaction.hpp"
#include <string>

//CLASS ELEMENTS_ANALYSE--------------------------------------------
class ElementAnalyse : public RetroactionAbs
{

protected:
    RetroactionAbs *retroaction_;

public:
    ElementAnalyse(RetroactionAbs *retroaction);
    void ajouterObjectifApprentissage(ObjectifApprentissage &objectifApprentissage) override;
    EnregistrementPtr lireEnregistrement() override;
    PartitionPtr lirePartition() override;
    ListeObjectifs &lireObjectifsApprentissage() override;
    virtual ~ElementAnalyse() = default;
};

//CLASS COMMENTAIRES_CONSTRUCTIFS--------------------------------------
class CommentaireConstructif : public ElementAnalyse
{
private:
    std::string commentaire_;

public:
    CommentaireConstructif(RetroactionAbs *retroaction, std::string &commentaire);
    std::string lireCommentaire() const;
    ~CommentaireConstructif() = default;
};

//CLASS CODE_COULEUR_LOGIQUE------------------------------------------
class CodeCouleurLogique : public ElementAnalyse
{
    using listeCouleur = std::vector<std::string>;

private:
    listeCouleur couleurs_;

public:
    CodeCouleurLogique(RetroactionAbs *retroaction);
    listeCouleur lireCouleurs() const;
    ~CodeCouleurLogique() = default;
};

#endif