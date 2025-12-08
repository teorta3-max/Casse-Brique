#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cassebrique.h"

int main()
{
    /*Initialisation des valeurs*/
    char grille[30][50];
    int loop = 1;
    int dep_x = 0;      // valeur de déplacement horizontale
    int dep_y = 0;      // verticale
    int posPlat_x = 25; // position platforme
    int posPlat_y;
    int posBall_x; // position Balle
    int posBall_y;

    remplirTableau(grille);
    TableauDeBase(grille);

    while (loop == 1)
    {
        system("cls");                                          // rafraichissement de l'ecran
        updateTableau(grille, posBall_x, posBall_y, posPlat_x); // mise a jour du tableau
        afficherTableau(grille);
        loop = quit(loop, input());                           // end of loop condition
        Sleep(100);                                           // Sleep pour rendre le jeux moins rapide
        posPlat_x -= analyze_input(input(), posPlat_x, loop); // ajustement de la position de la platforme
    }
}