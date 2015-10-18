#ifndef ABIN_H
#define ABIN_H

#include <iostream>
#include <string>
using namespace std;

typedef char * Element;

typedef struct Noeud {
	Element etiquette;
	Noeud *ag;
	Noeud *ad;
} Noeud;

typedef Noeud *Abin;

/*
Fonction qui permet d'initaliser l'arbre
Retourne un arbre initialisé
*/
Abin init();

/*
Procédure qui permet de désinitialiser un arbre
Parametres :
a : Abin à désinitialiser
Post-conditions :
estVide(a)
*/
void desinit(Abin& a);

/*
Fonction qui retourne un booleen selon que l'arbre est vide ou non
Parametres :
a : l'arbre
Retourne vrai si l'arbre est vide, faux sinon.
*/
bool estVide(const Abin a);

/*
Fonction qui retourne le sous-arbre gauche d'un arbre
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
Retourne l'ag de a
*/
Abin gauche(const Abin a);

/*
Fonction qui retourne le sous-arbre droit d'un arbre
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
Retourne l'ad de a
*/
Abin droite(const Abin a);

/*
Fonction qui retourne un arbre dont le sous arbre gauche est ag, et le sous arbre droit est ad
Parametres :
e : Element a ajouter
ag : sous-arbre gauche a enraciner
ad : sous-arbre droit a enraciner
Retourne un arbre avec deux sous arbres : ag et ad.
*/
Abin enracine(const Element e, const Abin ag, const Abin ad);

/*
Fonction qui retourne l'etiquette d'un noeud
Parametres :
a : Abin dont on veut connaitre la racine
Retourne un element
*/
Element racine(const Abin a);

/*
Fonction qui retourne la hauteur d'un arbre
Parametres :
a : l'arbre dont on veut connaitre la hauteur
Retourne un entier correspondant à la hauteur de l'arbre
*/
int hauteur(const Abin a);

/*
Procédure qui affiche l'arbre trié de façon postfixe
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
*/
void afficherParcoursPostfixe(const Abin a);

/*
Procédure qui affiche l'arbre trié de façon préfixe
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
*/
void afficherParcoursPrefixe(const Abin a);

/*
Procédure qui affiche l'arbre trié en largeur
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
*/
void afficherParcoursLargeur(const Abin a);

/*
Procédure qui affiche l'arbre trié de façon infixe
Parametres :
a : l'arbre
Pré-conditions :
non(estVide(a))
*/
void afficherParcoursInfixe(const Abin a);

#endif