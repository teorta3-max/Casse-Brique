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

    remplirTableau(grille);
    TableauDeBase(grille);
<<<<<<< HEAD
    while (loop == 1)
    {
        system("cls");
        updateTableau(grille, posBall_x, posBall_y, posPlat_x);
        afficherTableau(grille);
        Sleep(100);
    }
=======
    afficherTableau(grille);

>>>>>>> 688f58e1cf659b3ae47b8afbd4b30a042dd9d79b
}