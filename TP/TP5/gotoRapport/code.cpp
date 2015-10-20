/* MAIN */ 

#include "abin.h"

/*
Cette procédure permet l'affichage du menu
Parametre : Aucun
Pré-conditions : Aucune
*/
void menu() 
{
	cout << endl << "--- Menu ---" << endl;
	cout << "1- Parcours largeur " << endl;
	cout << "2- Parcours prefixe" << endl;
	cout << "3- Parcours infixe" << endl;
	cout << "4- Parcours postfixe" << endl;
	cout << "5- Hauteur de l'arbre" << endl;
	cout << "6- Quitter" << endl;
	cout << "Votre choix : ";
}


/*
Cette fonction permet de générer le jeu d'essais demandé dans le TP
Parametre : Aucun
Pré-conditions : Aucune
Retourne un arbre avec, avec les valeurs demandées dans le TP
*/
Abin enracinerJeuxDessais()
{
	Abin a;
	Abin ag;
	Abin ad;

	ad = enracine('t', init(), init());
	a = enracine('s', ad, init());
	ad = a;
	ag = enracine('v', init(), init());
	a = enracine('r', ag, ad);
	ad = enracine('b', init(), init());
	ag = enracine('q', init(), init());
	ad = enracine('p', ag, ad);
	ag = enracine('u', init(), init());
	ag = enracine('t', ag, ad);
	a = enracine('a', a, ag);
	return a;
}

int main(void)
{
	int choix;
	Abin a;
	void menu();
	Abin enracinerJeuxDessais();

	a = init();
	a = enracinerJeuxDessais();
	do
	{
		menu();
		cin >> choix;
		while (choix < 1 || choix > 6) {
			cout << "Merci de saisir une valeur correcte, recommencer." << endl;
			menu();
			cin >> choix;
		}

		switch (choix)
		{
			case 1 : //Parcours largeur
				if (estVide(a))
				{
					cout << "L'arbre est vide" << endl;
				}
				else {
					afficherParcoursLargeur(a);
				}
				break;
			case 2 : //Parcours prefixe
				if (estVide(a))
				{
					cout << "L'arbre est vide" << endl;
				}
				else {
					afficherParcoursPrefixe(a);
				}
				break;
			case 3 : //Parcours infixe
				if (estVide(a))
				{
					cout << "L'arbre est vide" << endl;
				}
				else {
					afficherParcoursInfixe(a);
				}
				break;
			case 4 : //Parcours postfixe
				if (estVide(a))
				{
					cout << "L'arbre est vide" << endl;
				}
				else {
					afficherParcoursPostfixe(a);
				}
				break;
			case 5 : //Hauteur de l'arbre
				cout << "Hauteur de l'arbre : " << hauteur(a) << endl;
				break;
			default : //Quitter
				cout << "Au revoir !" << endl;
				break;
		}

	} while (choix != 6);
	
	desinit(a);
}

/* FONCTIONS PROCEDURES */ 

#include "abin.h"
#include "fileAttente.h"

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
	if (!estVide(a)) {
		afficherParcoursPostfixe(gauche(a));
		afficherParcoursPostfixe(droite(a));
		cout << (*a).etiquette;
	}
}

void afficherParcoursPrefixe(const Abin a)
{
	if (!estVide(a)) {
		cout << (*a).etiquette;
		afficherParcoursPrefixe(gauche(a));
		afficherParcoursPrefixe(droite(a));
	}
}

void afficherParcoursLargeur(const Abin a)
{
	FileAttente f;

	init(f);

	ajoutQueue(f, a);
	while (!estVide(f)) {
		if (!estVide(gauche(getTete(f)))) {
			ajoutQueue(f, gauche(getTete(f)));
		}

		if (!estVide(droite(getTete(f)))) {
			ajoutQueue(f, droite(getTete(f)));
		}
		
		cout << racine(getTete(f));
		retirerTete(f);
	}
	
	desinit(f);
}

void afficherParcoursInfixe(const Abin a)
{
	if (!estVide(a)) {
		afficherParcoursInfixe(gauche(a));
		cout << (*a).etiquette;
		afficherParcoursInfixe(droite(a));
	}
}