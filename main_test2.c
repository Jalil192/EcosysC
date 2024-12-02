#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ecosys.h"


int main(){
	srand(time(NULL));

	// Création des listes de proies et de prédateurs (20 par liste)

	Animal *liste_proie = creer_animal(rand() % SIZE_X, rand() % SIZE_Y, 10);
	Animal *liste_predateur = creer_animal(rand() % SIZE_X, rand() % SIZE_Y, 10);
	
	for(int i = 0; i < 19; i++){
		ajouter_animal(rand() % SIZE_X, rand() % SIZE_Y, 10, &liste_proie);
		ajouter_animal(rand() % SIZE_X, rand() % SIZE_Y, 10, &liste_predateur);
	}


	// Test des fonctions ecrire_ecosys() et lire_ecosys()

	Animal *liste_proie_test_lire = NULL;
	Animal *liste_predateur_test_lire = NULL;
	ecrire_ecosys("ecosys.txt", liste_proie, liste_predateur);
	lire_ecosys("ecosys.txt", &liste_proie_test_lire, &liste_predateur_test_lire);


	afficher_ecosys(liste_proie_test_lire, liste_predateur_test_lire); printf("\n");


	Animal *tempProie = liste_proie_test_lire;
	printf("Proies :\n");
    while (tempProie) {
  		printf("%d, %d, %f\n", tempProie->x, tempProie->y, tempProie->energie);
  		tempProie = tempProie->suivant;
    }
  
	Animal *tempPredateur = liste_predateur_test_lire;
  	printf("\nPrédateurs :\n");
  	while (tempPredateur) {
  		printf("%d, %d, %f\n", tempPredateur->x, tempPredateur->y, tempPredateur->energie);
  		tempPredateur = tempPredateur->suivant;
    }
  
	liste_proie = liberer_liste_animaux(liste_proie);
	liste_predateur = liberer_liste_animaux(liste_predateur);
	liste_proie_test_lire = liberer_liste_animaux(liste_proie_test_lire);
	liste_predateur_test_lire = liberer_liste_animaux(liste_predateur_test_lire);

	//Nous testerons enlever_animal() dans main_tests.c, et non ici.
	return 0;
}

