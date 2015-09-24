/*Programme principal*/
#include "fonctions.h"

int main() {

	int nombre;
	clock_t tps_iteratif;
	clock_t tps_recursif;

	cout << "Entrez un nombre : ";
	cin >> nombre;

	controleSaisieEntier(nombre);

	srand(time(NULL));
	cout << "Somme des " << nombre << " premiers entiers (recursif) = " << sommeEntiersRecursif(nombre) << endl;
	tps_recursif = clock();

	srand(time(NULL));
	cout << "Somme des " << nombre << " premiers entiers (iteratif) = " << sommeEntiersIteratif(nombre) << endl << endl;
	tps_iteratif = clock();

	cout << "Temps iteration : " << (double)tps_iteratif / CLOCKS_PER_SEC << endl;
	cout << "Temps recursion : " << (double)tps_recursif / CLOCKS_PER_SEC << endl;
	return 0;
}