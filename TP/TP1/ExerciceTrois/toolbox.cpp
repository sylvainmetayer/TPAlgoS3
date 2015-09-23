#include "toolbox.h"

int controleSaisieEntiere(char *message, int borneMini, int borneMaxi)
{
	int resultat;
	cout << message << endl;
	cin >> resultat;
	while (resultat<=borneMini || resultat>=borneMaxi)
	{
		cout << "Merci de recommencer votre saisie" << endl;
		cin >> resultat;
	}
	return resultat;
}
