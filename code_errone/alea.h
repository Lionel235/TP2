#include <stdlib.h>
//#include "tableau.h"
#ifndef __TABLEAU_H__
#define __TABLEAU_H__
typedef struct 
{
	int* valeurs ;
	int taille ;
}tableau ;
#endif
tableau t ;

// tire un entier aléatoire entre 0 et m
int alea (int m);

// remplit t avec des valeurs aléatoires
void remplir (int m);
