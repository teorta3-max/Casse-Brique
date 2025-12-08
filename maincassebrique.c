#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "cassebrique.h"

<<<<<<< HEAD
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
=======
int main() {
    char grille[30][50];
    int posPlat_x = 23;
    int posPlat_y = 27;
    int posBall_x = 25;
    int posBall_y = 26;
    int fin = 0;

    srand(time(NULL));
>>>>>>> d1ea0f85385d6b636f93519a57bf136c54ee2bea

    remplirTableau(grille);
    TableauDeBase(grille);
<<<<<<< HEAD
=======
    grille[posBall_y][posBall_x] = 'O';
    afficherTableau(grille);

    while (fin == 0) {
        action(posPlat_x,fin);

        updateTableau(grille, posBall_x, posBall_y, posPlat_x);

        system("cls");
        afficherTableau(grille);

        Sleep(100);
    }

    return 0;
>>>>>>> d1ea0f85385d6b636f93519a57bf136c54ee2bea
}