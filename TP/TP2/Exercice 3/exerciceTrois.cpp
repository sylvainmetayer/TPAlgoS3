#include <iostream>
#include "exerciceTrois.h"
using namespace std;
int controleSaisieEntiere(char *message, int borneMini, int borneMaxi)
{
	int resultat;
	cout << message << endl;
	cin >> resultat;
	while (resultat <= borneMini || resultat >= borneMaxi)
	{
		cout << "Merci de recommencer votre saisie" << endl;
		cin >> resultat;
	}
	return resultat;
}

void quickSort(int tab[], int left, int right)
{

	int i = left;
	int j = right;

	int pivot = *(tab + (left + right) / 2);

	while (i <= j)
	{

		while (*(tab+i) < pivot)
			i++;

		while (*(tab+j) > pivot)
			j--;

		if (i <= j)
		{
			echanger(tab, i, j);
			i++;
			j--;
		}
	}
	if (left < j)
		quickSort(tab, left, j);

	if (i < right)
		quickSort(tab, i, right);

}

void echanger(int tab[], int i, int j)
{
	int tmp;

	tmp = *(tab + i);
	*(tab + i) = *(tab + j);
	*(tab + j) = tmp;
}