#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cassebrique.h"

int main(){
    /*Initialisation des valeurs*/
    char grille[30][50];
    int loop = 1;
    int tour = 0;
    int loop1 = 1;
    int dep_x = 0;      // valeur de déplacement horizontale
    int dep_y = 0;      // verticale
    
    while (loop1 == 1){
        if (loop1 == 1) {
            int posPlat_x = 25; // position initiale de la planche
            remplirTableau(grille);
            TableauDeBase(grille);
            while (loop == 1){
                Sleep(50);
                posPlat_x -= analyze_input(input(), posPlat_x, loop);
                system("cls");
                updateTableau(grille, posPlat_x, tour);
                afficherTableau(grille);
                loop = quit(loop, input());
                if (game_over()){
                    printf("GAME OVER !\n");
                    Sleep(2000);
                    loop = 0;
                }
                printf("Score actuel : %d\n", scorefinale(score(grille)));
            }
            loop = 1;
            loop1 =rejouer(loop1);
            tour = tour + 1;
        }
    }
}