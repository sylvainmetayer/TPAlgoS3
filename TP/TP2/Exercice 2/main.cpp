#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
	int tab[5];
	int *p1, *p2;
	char str[20];
	char *c;

	tab[0] = 5;
	cout << "tab[0] vaut " << tab[0] << endl; //modifié
	
	p1 = tab + 1;
	p2 = tab + 2; //modifié
	*p1 = 10;
	*p2 = 20;
	p2 = p1;

	cout << "p1 vaut " << *p1 << ", p2 vaut" << *p2 << endl;
	
	*tab = *p1 + 1; //modifié

	c = str + 3;

	gets_s(str);
	c = str ;

	c = c + 1;

	cout << "caractere " << *(c + 1) << " (troisieme lettre du mot)" << endl;

	//gets_s(c);
	if (*str == '\0')
		cout << "Chaine vide." << endl;
	else
		cout << "chaine " << str << endl;

	return 0;

}

