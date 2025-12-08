#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cassebrique.h"

void remplirTableau(char tab[30][50]){
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 50; j++){
            tab[i][j] = ' ';
        }
    }
}

void afficherTableau(char tab[30][50]){
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 50; j++){
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

void TableauDeBase(char tab[30][50]){
    tab[25][25] = 'O';
    for (int i = 23; i < 28; i++){
        tab[26][i] = '=';
    }
    for (int i = 0; i < 2; i++){     
        for (int j = 0; j < 50; j++){                   
            tab[i][j] = '#';
        }
    }
    for (int i = 0; i < 50; i++){
        tab[30][i] = '_';
        tab[0][i] = '_';
    }
}