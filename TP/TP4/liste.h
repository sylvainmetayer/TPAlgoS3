#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <iostream>
#include <string>
using namespace std;

typedef int Element;

typedef struct Maillon {
	Element numero;
	Maillon *suivant;
} Maillon;

typedef Maillon *Liste;

/*
Cette proc�dure permet d'initialiser une liste.
Param�tre de sortie :
l : la liste initialis�e
Post-condition :
estVide(l)
*/
void init(Liste& l);

/*
Permet de d�sinitialiser une liste.
Param�tres :
l : la liste � d�sinitialiser
Post-condition :
estVide(l)
*/
void desinit(Liste& l);

/*
Proc�dure qui permet d'afficher la liste.
Param�tre :
l : la liste � afficher
Pr�-condition :
non(estVide(l))
*/
void afficher(const Liste l);

/*
Fonction qui retourne la longueur de la liste.
Param�tre :
l : la liste.
Retourne la longueur de la liste.
*/
int longueur(Liste l);

/*
Fonction qui retourne la longueur de la liste calcul�e de facon recursive
Param�tre :
l : la liste.
m : le maillon a comparer a l.
Retourne la longueur de la liste.
*/
int longueurRecursive(Liste l, Maillon *maillon);

/*
Proc�dure permettant d'inserer un element en "debut" de liste.
Param�tre :
l : la liste
e : l'element � ajouter
Post-condition :
longueur(l) = longueur(l) + 1
*/
void inserer(Liste& l, const Element e);

/*
Proc�dure permettant de supprimer le "dernier" element de la liste
Param�tre :
l : la liste
Post-condition :
longueur(l) = longueur(l) - 1
*/
void supprimer(Liste& l);

/*
Fonction qui permet de savoir si la liste est vide ou non
Param�tres : 
	l : la liste
Retourne vrai si la liste est vide, faux sinon
*/
bool estVide(Liste l);
#endif

