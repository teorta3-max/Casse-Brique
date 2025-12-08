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

    remplirTableau(grille);
    TableauDeBase(grille);
    while (loop == 1)
    {
        system("cls");
        updateTableau(grille, posBall_x, posBall_y, posPlat_x);
        afficherTableau(grille);
        Sleep(100);
    }
}