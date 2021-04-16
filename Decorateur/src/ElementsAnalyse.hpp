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

class CommentaireConstructif : public ElementAnalyse
{
private:
    std::string commentaire_;

public:
    CommentaireConstructif(RetroactionAbs *retroaction, std::string &commentaire);
    std::string lireCommentaire() const;
    ~CommentaireConstructif() = default;
};

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