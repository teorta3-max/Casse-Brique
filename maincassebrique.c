#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "cassebrique.h"

int main()
{
    /*Initialisation des valeurs*/
    int loop = 1;
    char grille[30][50];
    int dep_x = 0; // valeur de déplacement horizontale
    int dep_y = 0; // verticale
    int posPlat_x; // position platforme
    int posPlat_y;
    int posBall_x; // position Balle
    int posBall_y;
    int dep;

    remplirTableau(grille);
    TableauDeBase(grille);
}