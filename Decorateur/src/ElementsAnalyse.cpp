#include "ElementsAnalyse.hpp"

ElementAnalyse::ElementAnalyse(RetroactionAbs*retroaction)
: retroaction_{retroaction} {}

CommentaireConstructif::CommentaireConstructif(RetroactionAbs* retroaction, std::string& commentaire)
: ElementAnalyse(retroaction), commentaire_{commentaire} {}

std::string CommentaireConstructif::lireCommentaire() const
{
    return commentaire_;
}

CodeCouleurLogique::CodeCouleurLogique(RetroactionAbs* retroaction) : ElementAnalyse(retroaction)
{
    /*Le code pour determiner quel couleur attribuer aux objectif vient ici*/
    couleurs_ = {"Vert","Jaune","Rouge"};
}

std::vector<std::string> CodeCouleurLogique::lireCouleurs() const
{
    return couleurs_;
}

std::shared_ptr<Partition> ElementAnalyse::lirePartition()
{
    return retroaction_->lirePartition();
}

std::shared_ptr<Enregistrement> ElementAnalyse::lireEnregistrement()
{
    return retroaction_->lireEnregistrement();
}

std::vector<std::unique_ptr<ObjectifApprentissage>>& ElementAnalyse::lireObjectifsApprentissage()
{
    return retroaction_->lireObjectifsApprentissage();
}

void ElementAnalyse::ajouterObjectifApprentissage(ObjectifApprentissage& objectifApprentissage)
{
    retroaction_->ajouterObjectifApprentissage(objectifApprentissage);
}

