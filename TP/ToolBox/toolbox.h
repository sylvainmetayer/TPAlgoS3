#ifndef TOOLBOX_H
#define TOOLBOX_H

/* Ce fichier d'en tete contient toutes les fonctions usuelles, telle que les controle de saisies, ... */

#include <iostream>
#include <stdio.h> //pour les char, car on ne doit pas utiliser de string

using namespace std;

/*
Cette fonction permet de saisir un entier, tout en controlant que la valeur saisie soit conforme aux bornes renseignées
Paramètres : 
- message : message à afficher lors de la demande de saisie
- borneMini : borne minimum 
- borneMaxi : borne maximum 
Pré-conditions : 
/
Post-conditions :
/
Retourne un entier qui est compris entre borneMini (exclus) et borneMaxi (exclus)
*/
int controleSaisieEntiere(char *message, int borneMini, int borneMaxi);

#endif