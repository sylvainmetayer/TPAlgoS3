#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <iostream>
using namespace std;

typedef int Element;

typedef struct Maillon {
	Element numero;
	Maillon* suivant;
} Maillon;

typedef struct FileAttente {
	Maillon* tete;
	Maillon* queue;
} FileAttente;

/*
Cette procédure permet d'initialiser une file.
Paramètre de sortie :
f : la file d'attente initialisée
Post-condition :
estVide(f)
*/
void init(FileAttente& f);

/*
Permet de désinitialiser une file.
Paramètres :
f : la file à désinitialiser
Post-condition :
estVide(f)
*/
void desinit(FileAttente& f);

/*
Permet d'ajouter une personne dans la file d'attente
Paramètre :
f : la file d'attente
e : l'element à ajouter
Post-condition :
longueur(ajoutQueue(f,e)) = longueur(f)+1
*/
void ajoutQueue(FileAttente& f, const Element e);

/*
Permet de retirer la personne en tete
Paramètre :
f : FileAttente
Pré-condition :
non(estVide(f))
Post-condition :
longueur(retirerTete(f)) = longueur(f)-1
*/
void retirerTete(FileAttente& f);

/*
Fonction qui retourne l'element en tete de file
Paramètre
f : la file d'attente
Pré-condition :
non(estVide(f))
Retourne un Element
*/
Element getTete(FileAttente f);

/*
Fonction qui retourne la longueur de la file
Paramètre :
f : FileAttente
Retourne la longueur de la file d'attente, ou 0 si vide.
*/
int longueur(FileAttente f);

/*
Fonction qui retourne l'état de la file
Paramètre :
f : la file d'attente
Retourne vrai si la file est vide, faux sinon
*/
bool estVide(FileAttente f);

#endif
