#include "toolbox.h"
#include "exerciceTrois.h"
#include "time.h"

int main(void)
{
	int a;
	int b;
	clock_t temps_recursif;
	clock_t temps_iteratif;

	cout << "Calcul du pgcd de a et b" << endl;

	a = controleSaisieEntiere("a (positif) : ", 0, 99999);
	b = controleSaisieEntiere("b (positif) : ", 0, 99999);

	srand(time(NULL));
	cout << "pgcd(a,b) (version recursive) = " << pgcdRecursive(a, b) << endl;
	temps_recursif = clock();
	cout << "Temps ecoule pour realiser le calcul : " << (double)temps_recursif / CLOCKS_PER_SEC << endl;

	srand(time(NULL));
	cout << "pgcd(a,b) (version iterative) = " << pgcdIterative(a, b) << endl;
	temps_iteratif = clock();
	cout << "Temps ecoule pour realiser le calcul : " << (double)temps_iteratif / CLOCKS_PER_SEC << endl;

	return 0;
}
//limite recusrive : 1 - 4703