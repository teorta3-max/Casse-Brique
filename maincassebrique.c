
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cassebrique.h"

int main()
{
    /*Initialisation des valeurs*/
    char grille[30][50];
    int dep_x = 0; // valeur de déplacement horizontale
    int dep_y = 0; // verticale
    int posPlat_x; // position platforme
    int posPlat_y;
    int posBall_x; // position Balle
    int posBall_y;

    /*setup du tableau*/
    remplirTableau(grille);
    TableauDeBase(grille);
    afficherTableau(grille);
    updateTableau(grille , posBall_x , posBall_y)
}