#ifndef FONCTIONSEXERCICEDEUX_H
#define FONCTIONSEXERCICEDEUX_H

/* Ce fichier d'en tete contient toutes les fonctions utilis�es pour l'exercice 2 du TP1 */

/*
Cette fonction calcule a puissance n de fa�on recursive
Parametres : 
a : Nombre � elever � la puissance n
n : puissance donn�e
Pr�-conditions : 
a >= 0
n >= 0
Retourne a puissance n
*/
int puissanceRecursive(float a, int n);

/*
Cette fonction calcule a puissance n de fa�on iterative
Parametres :
a : Nombre � elever � la puissance n
n : puissance donn�e
Pr�-conditions :
a >= 0
n >= 0
Retourne a puissance n
*/
int puissanceIterative(float a, int n);
#endif
