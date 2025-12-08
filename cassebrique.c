#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cassebrique.h"

void remplirTableau (char tab[50][30]){
    for (int i ; i < 50; i++){
        for (int j ; j < 30; j++){
            tab[i][j] = ' ';
        }
    }
}

void afficherTableau (char tab[50][30]){
    for (int i ; i < 50; i++){
        for (int j ; j < 30; j++){
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
}

void TableauDeBase (char tab[50][30]){
    tab[45][15] = 'O';
    for (int i =13;i < 18; i++){
        tab[46][i] = '=';
    }
    char brik = "|###|";
    for (int i = 0;i < 2 ;i++){
        for (int j ; j < 30; j += 5){
            tab[i][j] = brik;
        }
    }
}