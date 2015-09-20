#ifndef EXERCICETROIS_H
#define EXERCICETROIS_H

/* Ce fichier d'en tete contient toutes les fonctions utilisées pour l'exercice 3 du TP1 */

/*
Cette fonction calcule le pgcd de deux nombres sous forme recursive
Paramètres :
- a : premier entier
- b : deuxième entier
Préconditions :
- a > 0
- b > 0
Retourne le pgcd de a et b
*/
int pgcdRecursive(int a, int b);

/*
Cette fonction calcule le pgcd de deux nombres sous forme iterative
Paramètres :
- a : premier entier
- b : deuxième entier
Préconditions :
- a > 0
- b > 0
Retourne le pgcd de a et b
*/
int pgcdIterative(int a, int b);

#endif