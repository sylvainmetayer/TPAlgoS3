//MODULE LISTE

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

//Programme principal 

#include "liste.h"
#include <iostream>

using namespace std;

int main()
{
	Liste l;
	Element element;
	init(l);
	int choix;
	do
	{
		cout << " -- Menu principal -- " << endl;
		cout << "1. Afficher la liste" << endl;
		cout << "2. Afficher la longueur" << endl;
		cout << "3. Inserer un element en queue" << endl;
		cout << "4. Supprimer l'element en queue" << endl;
		cout << "5. Quitter" << endl;
		cout << "Votre choix : ";
		cin >> choix;

		switch (choix)
		{
		case 1: //Afficher la liste
			if (estVide(l))
			{
				cout << "La liste est vide." << endl;
			}
			else
			{
				afficher(l);
			}
			break;

		case 2 : //Afficher longueur
			cout << longueur(l) << endl;
			cout << "Longueur calculee de facon recursive :" << longueurRecursive(l, (*l).suivant) << endl;
			break;

		case 3: //Insertion
			cout << "Entrez l'element a inserer : ";
			cin >> element;
			inserer(l, element);
			cout << "Element insere !" << endl;
			break;

		case 4: //Suppression
			if (estVide(l))
			{
				cout << "La liste est vide." << endl;
			}
			else
			{
				supprimer(l);
				cout << "Element en queue supprime." << endl;
			}
			break;
		default:
			cout << "Erreur, merci de recommencer votre saisie" << endl;
		}
	} while (choix != 5);
}

//Implementation de liste.h

#include "liste.h"

/*
Procedure qui permet le décalage du pointeur référent d'un.
Préconditions :
longueur(l) > 1
Post-conditions :

*/
void rotation(Maillon **p)
{
	(*p) = (*p)->suivant;
}

void init(Liste& l)
{
	l = NULL;
}

int longueur(Liste l)
{
	int compteur;
	Maillon *tmp;
	void rotation(Maillon **p);

	if (estVide(l))
	{
		return 0;
	}

	compteur = 1;
	tmp = l;
	rotation(&tmp);

	while (l != tmp)
	{
		compteur++;
		rotation(&tmp);
	}

	return compteur;
}

int longueurRecursive(Liste l, Maillon *maillon) {
	if (maillon == l ) {
		return 1;
	}
	else {
		return 1 + longueurRecursive(l, (*maillon).suivant);
	}
}

void desinit(Liste& l)
{
	Maillon *tmp;
	Maillon *aDetruire;
	void rotation(Maillon **p);

	tmp = l;
	while (longueur(l) != 1)
	{
		for (int i = 0; i < longueur(l) - 1; i++)
		{
			rotation(&tmp);
		}

		aDetruire = tmp;
		tmp = (*tmp).suivant;
		delete aDetruire;
	}
	delete l;
}

void inserer(Liste& l, const Element e)
{
	Maillon *tmp;
	Maillon *np;

	np = new Maillon;
	tmp = new Maillon;
	

	(*np).numero = e;
	//(*np).suivant = l;

	if (estVide(l) )
	{
		//premier element ajouté
		(*np).suivant = np;
		l = np;
	}
	else
	{
		tmp = (*l).suivant;
		while ((*tmp).suivant != l)
		{
			rotation(&tmp);
		} //tant qu'on est pas sur le dernier

		(*tmp).suivant = np;
		(*np).suivant = l;
		l = np;
	}
}


void afficher(Liste l)
{
	Maillon *tmp;
	void rotation(Maillon *p);

	tmp = l;

	do {
		cout << (*tmp).numero << endl;
		rotation(&tmp);
	} while (tmp != l);
}

void supprimer(Liste& l)
{
	Maillon *tmp;
	Maillon *newQueue;
	if (longueur(l) == 1)
	{
		tmp = l;
		delete tmp;
		init(l);
	}
	else
	{
		newQueue = (*l).suivant;
		tmp = l;
		for (int i = 1; i < longueur(l); i++)
		{
			tmp = (*tmp).suivant;
		}
		(*tmp).suivant = newQueue;
		delete l;
		l = newQueue;
	}
}
bool estVide(const Liste l)
{
	return l == NULL;
}
