#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include "cassebrique.h"

int main() {
    char grille[30][50];
    int posPlat_x = 23;
    int posPlat_y = 27;
    int posBall_x = 25;
    int posBall_y = 26;
    int fin = 0;

    srand(time(NULL));

    grille[posBall_y][posBall_x] = 'O';
    afficherTableau(grille);

    while (fin == 0) {
        
        updateTableau(grille, posBall_x, posBall_y, posPlat_x);
        system("cls");
        afficherTableau(grille);
        action(posPlat_x,fin);
        Sleep(100);
    }

    return 0;
    }
}