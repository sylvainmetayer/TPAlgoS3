#include "fileAttente.h"

/*Point d'entrée de l'application*/
int main(void)
{
	int choix;
	struct FileAttente f;

	Element ajout;
	
	init(f);
	do {
		cout << "---Menu---" << endl;
		cout << "1- Ajouter une personne en queue" << endl;
		cout << "2- Retirer la personne en tete " << endl;
		cout << "3- Consulter la personne en tete de file" << endl;
		cout << "4- Calculer la longueur de la file d'attente" << endl;
		cout << "5- Quitter" << endl;
		cout << "Votre choix : ";
		cin >> choix;
		
		switch (choix)
		{
		case 1: //AJOUT		
			cout << "Saisir le nom de la personne :";
			cin >> ajout;
			ajoutQueue(f, ajout);
			cout << "Personne ajoutee" << endl;
			break;
		case 2: //RETIRER
			if (estVide(f))
			{
				cout << "Il n'y a personne dans la file" << endl;
			}
			else
			{
				retirerTete(f);
				cout << "Personne retiree" << endl;
			}
			break;
		case 3: //CONSULTER
			if (estVide(f))
			{
				cout << "Il n'y a personne dans la file" << endl;
			}
			else
			{
				cout << "Personne en tete de file : " << getTete(f) << endl;
			}
			
			break;
		case 4: //LONGUEUR
			cout << "Il y a " << longueur(f) << " personne(s) dans la file" << endl;
			break;
		case 5: //QUITTER
			cout << "Sortie de l'application." << endl;
			break;
		default: //ERREUR
			break;
		}
	} while (choix != 5);
	
	exit(0);
}