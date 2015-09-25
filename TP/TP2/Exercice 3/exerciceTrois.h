#ifndef EXERCICEUN_H
#define EXERCICEUN_H

#include <iostream>
#include <stdio.h> //pour les char, car on ne doit pas utiliser de string

using namespace std;

/*
Cette fonction permet de saisir un entier, tout en controlant que la valeur saisie soit conforme aux bornes renseign�es
Param�tres :
- message : message � afficher lors de la demande de saisie
- borneMini : borne minimum
- borneMaxi : borne maximum
Pr�-conditions :
/
Post-conditions :
/
Retourne un entier qui est compris entre borneMini (exclus) et borneMaxi (exclus)
*/
int controleSaisieEntiere(char *message, int borneMini, int borneMaxi);

/*
Cette proc�dure permet de trier rapidement un tableau d'entiers
Param�tres :
	tableau : le tableau d'entiers
	left : la borne inf�rieure
	right : la borne sup�rieure
*/
void quickSort(int tab[], int left, int right);

/*
Procedure permettant d'�changer deux entiers dans un tableau
Param�tres : 
	tableau : le tableau d'entiers
	i : le premier nombre � �changer
	j : le deuxi�me nombre � �changer
*/
void echanger(int tab[], int i, int j);
#endif