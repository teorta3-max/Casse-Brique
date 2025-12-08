#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "cassebrique.h"

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
    tab[26][25] = 'O';
    for (int i = 23; i < 28; i++)
    {
        tab[27][i] = '=';
    }
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 50; j++)
        {
            tab[i][j] = '#';
        }
    }
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

char input()
{
    if (_kbhit()) // lit l'input de l'utilisateur
    {
        return (char)_getch(); // le renvoie
    }
    return 0; // sinon renvoie rien
}

void updateTableau(char tab[30][50] ,int posballe_X ,int posballe_Y){
    tab[posballe_X][posballe_Y] = ' ';
    int dx = -1;
    int dy = -1;
    int T = 0


    posballe_X += dx;
    posballe_Y += dy;

   
    if (posballe_X <= 1 || posballe_X >= 48)
        dx = -dx;

    if (posballe_Y <= 1)
        dy = -dy;

    if (posballe_Y == 26 && posballe_X >= T && posballe_X <= T + 4)
    {
        dy = -1;
        if (posballe_X == T) dx = -1;
        else if (posballe_X == T + 4) dx = 1;
    }

    tab[posballe_Y][posballe_X] = 'O';
}