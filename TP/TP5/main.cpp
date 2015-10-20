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