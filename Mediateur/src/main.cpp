#include "GestionnaireAlerte.h"
#include "ProfilEtudiant.h"
#include "ProfilEtudiant.h"

int main()
{
    ProfilProfesseur professeur1;
    ProfilEtudiant etudiant1;
    GestionnaireAlerte GestionnaireAlerte(&professeur1, &etudiant1);
    
    std::cout << "L'étudiant tente de s'enregistrer sur PolyPiano"<<std::endl;
    etudiant1.enregistrer();

    etudiant1.logInEtudiant();

    professeur1.ajouterDevoir(); 
}