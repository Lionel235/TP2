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

// fait remonter une bulle jusqu'à la case k
void bulle (int k) ;

// tri (décroissant) du tableau t par la méthode du tri à bulle 
void trier ();
