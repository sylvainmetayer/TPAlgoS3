#ifndef FONCTIONSEXERCICEDEUX_H
#define FONCTIONSEXERCICEDEUX_H

/* Ce fichier d'en tete contient toutes les fonctions utilisées pour l'exercice 2 du TP1 */

/*
Cette fonction calcule a puissance n de façon recursive
Parametres : 
a : Nombre à elever à la puissance n
n : puissance donnée
Pré-conditions : 
a >= 0
n >= 0
Retourne a puissance n
*/
int puissanceRecursive(float a, int n);

/*
Cette fonction calcule a puissance n de façon iterative
Parametres :
a : Nombre à elever à la puissance n
n : puissance donnée
Pré-conditions :
a >= 0
n >= 0
Retourne a puissance n
*/
int puissanceIterative(float a, int n);
#endif
