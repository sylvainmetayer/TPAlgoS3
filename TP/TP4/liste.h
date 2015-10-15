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
Cette procédure permet d'initialiser une liste.
Paramètre de sortie :
l : la liste initialisée
Post-condition :
estVide(l)
*/
void init(Liste& l);

/*
Permet de désinitialiser une liste.
Paramètres :
l : la liste à désinitialiser
Post-condition :
estVide(l)
*/
void desinit(Liste& l);

/*
Procédure qui permet d'afficher la liste.
Paramètre :
l : la liste à afficher
Pré-condition :
non(estVide(l))
*/
void afficher(const Liste l);

/*
Fonction qui retourne la longueur de la liste.
Paramètre :
l : la liste.
Retourne la longueur de la liste.
*/
int longueur(Liste l);

/*
Fonction qui retourne la longueur de la liste calculée de facon recursive
Paramètre :
l : la liste.
m : le maillon a comparer a l.
Retourne la longueur de la liste.
*/
int longueurRecursive(Liste l, Maillon *maillon);

/*
Procédure permettant d'inserer un element en "debut" de liste.
Paramètre :
l : la liste
e : l'element à ajouter
Post-condition :
longueur(l) = longueur(l) + 1
*/
void inserer(Liste& l, const Element e);

/*
Procédure permettant de supprimer le "dernier" element de la liste
Paramètre :
l : la liste
Post-condition :
longueur(l) = longueur(l) - 1
*/
void supprimer(Liste& l);

/*
Fonction qui permet de savoir si la liste est vide ou non
Paramètres : 
	l : la liste
Retourne vrai si la liste est vide, faux sinon
*/
bool estVide(Liste l);
#endif

