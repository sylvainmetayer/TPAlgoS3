#include "liste.h"






































































//PARTIE DAMIEN
void afficher(Liste l)
{
	Maillon *tmp;
	void rotation(Maillon *p);

	tmp = l;

	do {
		cout << (*tmp).numero;
		rotation(tmp);
	} while (tmp != l);
}

void supprimer(Liste l)
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