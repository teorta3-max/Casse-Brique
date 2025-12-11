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
        Sleep(50);
        posPlat_x -= analyze_input(input(), posPlat_x, loop);
        system("cls");
        updateTableau(grille, posPlat_x);
        afficherTableau(grille);
        loop = quit(loop, input());
        if (game_over() == 1)
        {
            loop = 0;
        }
    }
    printf("Votre score est de : %d\n", score(grille));
}