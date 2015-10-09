#include "liste.h"

/*
Procedure qui permet le décalage du pointeur référent d'un.
Préconditions :
longueur(l) > 1
Post-conditions :

*/
void rotation(Maillon *p)
{
	p = (*p).suivant;
}

void init(Liste& l)
{
	l = NULL;
}

int longueur(Liste l)
{
	int compteur;
	Maillon *tmp;
	void rotation(Maillon *p);

	if (estVide(l))
	{
		return 0;
	}

	compteur = 1;
	tmp = l;
	rotation(tmp);

	while (l != tmp)
	{
		compteur++;
		rotation(tmp);
	}

	return compteur;
}

void desinit(Liste& l)
{
	Maillon *tmp;
	Maillon *aDetruire;
	void rotation(Maillon *p);

	tmp = l;
	while (longueur(l) != 1)
	{
		for (int i = 0; i < longueur(l) - 1; i++)
		{
			rotation(tmp);
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
	if (estVide(l))
	{
		np = new Maillon;
		(*np).numero = e;
		(*np).suivant = np;
		l = np;
	}
	else
	{
		tmp = l;
		for (int i = 1; i < longueur(l) - 1; i++)
		{
			rotation(tmp);
		}
		np = new Maillon;
		(*np).numero = e;
		(*np).suivant = l;
		(*tmp).suivant = np;
	}
}


void afficher(Liste l)
{
	Maillon *tmp;
	void rotation(Maillon *p);

	tmp = l;

	do {
		cout << (*tmp).numero << endl;
		rotation(tmp);
	} while (tmp != l);
}

void supprimer(Liste& l)
{
	Maillon *tmp;
	Maillon *aDetruire;

	tmp = l;

	for (int i = 1; i < longueur(l) - 1; i++)
	{
		tmp = (*tmp).suivant;
	}

	aDetruire = (*tmp).suivant;
	delete aDetruire;

	(*tmp).suivant = l;
}
bool estVide(const Liste l)
{
	return l == NULL;
}