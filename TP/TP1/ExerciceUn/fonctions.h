/*fonctions.h*/
#ifndef FONCTION_H
#define FONCTION_H

#include <iostream>
#include <time.h>
using namespace std;

//Cette fonction calcule la somme
//des n premiers entiers positifs ou nuls
//Parametres : 
//n : entier maximum donné
//Préconditions
//n >= 0
//Retourne la somme des entiers de 0 à nombre
int sommeEntiersIteratif(int nombre);

//Cette fonction calcule la somme
//des n premiers entiers positifs ou nuls
//Parametres : 
//n : entier maximum donné
//Préconditions
//n >= 0
//Retourne la somme des entiers de 0 à nombre
int sommeEntiersRecursif(int nombre);

//Cette procédure permet de controler la saisie d'un entier positif
//Parametres :
//nombre : nombre à contrôler
void controleSaisieEntier(int& nombre);

#endif