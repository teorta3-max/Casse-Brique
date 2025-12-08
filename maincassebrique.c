#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cassebrique.h"

int main() {
    /* Initialisation des valeurs */
    char grille[30][50];
    int posPlat_x = 23; // position initiale de la plateforme
    int posPlat_y = 27; // ligne de la plateforme
    int posBall_x = 25; // position initiale de la balle
    int posBall_y = 26;

    /* Setup du tableau */
    remplirTableau(grille);
    TableauDeBase(grille);
    
    // Placer la balle initialement
    grille[posBall_y][posBall_x] = 'O';

    afficherTableau(grille);

    // Exemple de mise à jour
    updateTableau(grille, posBall_x, posBall_y, posPlat_x);

    afficherTableau(grille);

    return 0;
}