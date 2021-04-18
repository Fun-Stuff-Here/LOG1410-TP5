#include "ElementsAnalyse.hpp"

ElementAnalyse::ElementAnalyse(RetroactionAbs *retroaction)
    : retroaction_{retroaction} {}

CommentaireConstructif::CommentaireConstructif(RetroactionAbs *retroaction, std::string &commentaire)
    : ElementAnalyse(retroaction), commentaire_{commentaire} {}

CodeCouleurLogique::CodeCouleurLogique(RetroactionAbs *retroaction) : ElementAnalyse(retroaction)
{
    /*Le code pour determiner quel couleur attribuer aux objectif vient ici*/
    couleurs_ = {"Vert", "Jaune", "Rouge"};
}

//METHODES CLASS ELEMENT_ANALYSE-----------------------------------------------------------------------
void ElementAnalyse::ajouterObjectifApprentissage(ObjectifApprentissage &objectifApprentissage)
{
    retroaction_->ajouterObjectifApprentissage(objectifApprentissage);
}
std::shared_ptr<Partition> ElementAnalyse::lirePartition()
{
    return retroaction_->lirePartition(); // Forward vers la partition
}
std::shared_ptr<Enregistrement> ElementAnalyse::lireEnregistrement()
{
    return retroaction_->lireEnregistrement(); // Forward vers la partition
}
std::vector<std::unique_ptr<ObjectifApprentissage>> &ElementAnalyse::lireObjectifsApprentissage()
{
    return retroaction_->lireObjectifsApprentissage(); // Forward vers la partition
}

//METHODE CLASS COMMENTAIRE_CONTRSUCTIFS---------------------------------------------------------------
std::string CommentaireConstructif::lireCommentaire() const
{
    return commentaire_;
}

//METHODE CLASS CODE_COULEUR_LOGIQUE------------------------------------------------------------------
std::vector<std::string> CodeCouleurLogique::lireCouleurs() const
{
    return couleurs_;
}



