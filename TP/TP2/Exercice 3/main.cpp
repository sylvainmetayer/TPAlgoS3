#include <iostream>
#include <stdio.h>    
#include <stdlib.h>     
#include <time.h> 
#include "exerciceTrois.h"
using namespace std;

int main()
{
	double elapsedTime;
	clock_t stopTime;
	clock_t startTime = clock();
	int tab[150001];

	for (int i = 0; i < 150000; i++) {
		int random = rand() % 100000 + 1;
		tab[i] = random;
	}
	quickSort(tab, 0, 150000);
	stopTime = clock();
	elapsedTime = (stopTime - startTime) / (CLOCKS_PER_SEC / (double) 1000.0);
	cout << "Temps : " << elapsedTime << endl;
}
