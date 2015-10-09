#include "fileAttente.h"

void init(FileAttente& f)
{
	f.queue = NULL;
	f.tete = NULL;
}

void ajoutQueue(FileAttente& f, const Element e)
{
	Maillon* np;

	np = new Maillon;

	(*np).numero = e;
	(*np).suivant = NULL;
	
	if (longueur(f) == 0)
	{
		//premier ajout
		f.tete = np;
		f.queue = np;
	} 
	else
	{
		(*f.queue).suivant = np;
		f.queue = np;
	}
}
void desinit(FileAttente& f)
{
	delete f.queue;
	delete f.tete;
	f.queue = NULL;
	f.tete = NULL;
}

Element getTete(FileAttente f)
{
	return (*f.tete).numero;
}

void retirerTete(FileAttente& f)
{
	Maillon *tmp;

	tmp = f.tete;
	f.tete = (*f.tete).suivant;
	delete tmp;
}

int longueur(const FileAttente f)
{

	Maillon *p;
	int compteur =0;

	p = f.tete;

	while (p != NULL)
	{
		p = (*p).suivant;
		compteur++;
	}

	return compteur;
}

bool estVide(FileAttente f)
{
	return f.tete == NULL;
}