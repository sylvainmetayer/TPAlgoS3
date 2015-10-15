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
		}
	} while (choix != 5);
}