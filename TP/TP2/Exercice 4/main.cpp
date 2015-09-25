#include <iostream>
using namespace std;

//pas de & sur le dst, car il s'agit d'un tableau
/*
Cette procédure permet de copier une chaine src dans une chaine dst.
Paramètres :
src : Chaine source
dst : Chaine destination
Pré-conditions :
/
Post-conditions :
src est identique à dst
*/
void copieChaine(const char src[], char dst[])
{
	*dst = *src;
	if (*src != '\0')
	{
		copieChaine(src + 1, dst + 1);
	}
}

int main(void)
{
	char src[255];
	char dst[255];
	void copieChaine(const char src[], char dst[]);

	cout << "Copie d'une chaine dans une autre : " << endl << endl;

	cout << "Saisir chaine : ";
	cin >> src;

	copieChaine(src, dst);

	cout << "Chaine saisie : " << src << "\nChaine copiee : " << dst << endl;
}