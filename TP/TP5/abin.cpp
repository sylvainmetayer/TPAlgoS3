#include "abin.h"

Abin init()
{
	return NULL;
}

void desinit(Abin& a)
{
	if (!estVide(a))
	{
		desinit((*a).ag);
		desinit((*a).ad);
		(*a).etiquette = NULL;
	}
	delete a;
}

bool estVide(const Abin a)
{
	return a == NULL;
}

Abin gauche(const Abin a)
{
	return (*a).ag;
}

Abin droite(const Abin a)
{
	return (*a).ad;
}


Abin enracine(const Element e, const Abin ag, const Abin ad)
{
	Noeud *a;

	a = new Noeud;

	(*a).ad = ad;
	(*a).ag = ag;
	(*a).etiquette = e;

	return a;
}

Element racine(const Abin a)
{
	return (*a).etiquette;
}

/*
Fonction qui retourne la valeur maximale entre deux entiers
Parametres :
a : Entier a
b : Entier b
Retourne a si a > b, b sinon
*/
int Maximum(const int a,const int b)
{
	return a > b ? a : b;
}

int hauteur(const Abin a)
{
	int Maximum(const int a, const int b);

	if (estVide(a))
	{
		return 0;
	}
	return 1 + Maximum(hauteur(gauche(a)), hauteur(droite(a)));
}

void afficherParcoursPostfixe(const Abin a)
{
	//TODO
}

void afficherParcoursPrefixe(const Abin a)
{
	//TODO
}

void afficherParcoursLargeur(const Abin a)
{
	//TODO
}

void afficherParcoursInfixe(const Abin a)
{
	//TODO
}