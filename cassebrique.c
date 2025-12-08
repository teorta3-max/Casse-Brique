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