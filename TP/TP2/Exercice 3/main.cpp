#include <iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h> 
#include "exerciceTrois.h"
using namespace std;

int main()
{
	int tab[50];

	for (int i = 0; i < 50; i++) {
		int random = rand() % 50 + 1;
		tab[i] = random;
	}
	quickSort(tab, 0, 49);

	for (int i = 0; i < 50; i++)
	{
		cout << tab[i] << endl;
	}
}

