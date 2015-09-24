/*fonctions.cpp*/
#include <iostream>
using namespace std;

int sommeEntiersIteratif(int n)
{
	int i; //compteur boucle
	int resultat;

	resultat = 0;

	for (i = 1; i <= n; i++)
	{
		resultat = resultat + i;
	}

	return resultat;
}
int sommeEntiersRecursif(int n)
{
	if (n == 0)
		return n;
	else
		return n + sommeEntiersRecursif(n - 1);
}



void controleSaisieEntier(int& nombre)
{
	while (nombre < 0)
	{
		cout << "Entrez un nombre superieur egal a 0 : ";
		cin >> nombre;
	}
}