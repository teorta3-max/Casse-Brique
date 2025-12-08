#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cassebrique.h"

int main()
{
    char grille[30][50];
    int dep_x = 0; 
    int dep_y = 0; 
    int posPlat_x; 
    int posPlat_y;
    int posBall_x; 
    int posBall_y;

    remplirTableau(grille);
    TableauDeBase(grille);
    afficherTableau(grille);

    if (input() == "q")
    {
        posPlat_x = -1;
    }
    if (input() == "d")
    {
        posPlat_x = +1;
    }
}