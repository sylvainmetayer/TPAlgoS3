#include <iostream>
using namespace std;

int main(void)
{
	int i, j;
	int *p1, *p2;
	i = 2;
	j = 5;
	p1 = &i;
	cout << "Contenu de p1 vaut " << *p1 << endl;
	i = i + 1;
	cout << "Contenu de p1 vaut " << *p1 << endl << endl;
	p2 = p1;
	*p2 = *p1 + j;
	cout << "P1 vaut " << *p1 << " \np2 vaut " << *p2 << " \ni vaut " << i << "\net j vaut " << j << endl << endl;
	p1 = &j;
	*p1 = i + j;
	cout << "P1 vaut " << *p1 << " \np2 vaut " << *p2 << " \ni vaut " << i << "\net j vaut " << j << endl << endl;
	return 0;
}