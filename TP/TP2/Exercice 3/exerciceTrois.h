#ifndef EXERCICEUN_H
#define EXERCICEUN_H

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

/*
Cette procédure permet de trier rapidement un tableau d'entiers
Paramètres :
	tableau : le tableau d'entiers
	left : la borne inférieure
	right : la borne supérieure
*/
void quickSort(int tab[], int left, int right);

/*
Procedure permettant d'échanger deux entiers dans un tableau
Paramètres : 
	tableau : le tableau d'entiers
	i : le premier nombre à échanger
	j : le deuxième nombre à échanger
*/
void echanger(int tab[], int i, int j);
#endif