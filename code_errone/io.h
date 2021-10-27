#include <stdio.h>
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

// affiche le tableau
void affiche();
