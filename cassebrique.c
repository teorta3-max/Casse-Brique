#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cassebrique.h"

int dx = -1;
int dy = -1;

void remplirTableau(char tab[30][50])
{
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            tab[i][j] = ' ';
        }
    }
}

void afficherTableau(char tab[30][50])
{
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            printf("%c", tab[i][j]);
        }
        printf("\n");
    }
}

void TableauDeBase(char tab[30][50])
{
    for (int i = 23; i < 28; i++)
        tab[27][i] = '=';

    for (int i = 1; i < 3; i++)
        for (int j = 0; j < 50; j++)
            tab[i][j] = '#';

    for (int i = 0; i < 50; i++)
    {
        tab[29][i] = '_';
        tab[0][i] = '_';
    }

    for (int i = 1; i < 30; i++)
    {
        tab[i][0] = '|';
        tab[i][49] = '|';
    }
}
char input(){
    if (_kbhit())
        return (char)_getch();

    return 0;
}

void updateTableau(char tab[30][50], int posBalle_x, int posBalle_y, int posPlanche){
    tab[posBalle_y][posBalle_x] = ' ';

    posBalle_x += dx;
    posBalle_y += dy;

    if (posBalle_x <= 1 || posBalle_x >= 48)
        dx = -dx;

    if (posBalle_y <= 1)
        dy = -dy;

    if (posBalle_y == 26 && posBalle_x >= posPlanche && posBalle_x <= posPlanche + 4)
    {
        dy = -1;
        if (posBalle_x == posPlanche)
            dx = -1;
        else if (posBalle_x == posPlanche + 4)
            dx = 1;
    }

    tab[posBalle_y][posBalle_x] = 'O';
}

void action(int posPlat_x, int fin){
    if (_kbhit()) {
            char touche = _getch();
            if (touche == 'q') {
                if (posPlat_x > 1) {
                    posPlat_x--;
            }
        }
        else if (touche == 'd') {
            if (posPlat_x < 45) {
                posPlat_x++;
            }
        }

        else if (touche == 's') {
            fin = 1;
        }
    }
}