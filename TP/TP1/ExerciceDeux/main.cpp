#include "fonctionsExerciceDeux.h"
#include "toolbox.h"

#include <time.h> //utilisé pour le compteur

int main(void)
{
	int n;
	float a;
	clock_t temps_recursif;
	clock_t temps_iteratif;

	cout << "Calcul de a puissance n " << endl;

	n = controleSaisieEntiere("n (positif ou nul) : ", -1, 99999);

	cout << "a : " << endl;
	cin >> a; //pas besoin de controle

	srand(time(NULL));
	cout << "a puissance n (version recursive) = " << puissanceRecursive(a, n) << endl;
	temps_recursif = clock();
	cout << "Temps ecoule pour realiser le calcul (ms) : " << (double)temps_recursif / CLOCKS_PER_SEC << endl;

	srand(time(NULL));
	cout << "a puissance n (version iterative) = " << puissanceIterative(a, n) << endl;
	temps_iteratif = clock();
	cout << "Temps ecoule pour realiser le calcul (ms) : " << (double)temps_iteratif / CLOCKS_PER_SEC << endl;

	return 0;
}

//TODO test + explication rapport