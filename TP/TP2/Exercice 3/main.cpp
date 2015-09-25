#include <iostream>
#include "exerciceTrois.h"
using namespace std;

int main()
{
	int tab[11] = { -3,5,4,3,9,6,7,0,8,-7,-9 };
	quickSort(tab, 0, 10);

	for (int i = 0; i < 11; i++)
		cout << tab[i] << endl;
}
