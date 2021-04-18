#include "GestionnaireAlerte.h"
#include "ProfilEtudiant.h"
#include "ProfilEtudiant.h"

int main()
{
    // 1. Initialiser un professeur, un étudiant et un gestionnaire d'alerte
    ProfilProfesseur professeur1;
    ProfilEtudiant etudiant1;
    GestionnaireAlerte GestionnaireAlerte(&professeur1, &etudiant1);
    
    // 2. Actionner le professeur et l'étudiant
    std::cout << "L'étudiant tente de s'enregistrer sur PolyPiano"<<std::endl;
    etudiant1.enregistrer();
    etudiant1.logInEtudiant();
    professeur1.ajouterDevoir(); 
}