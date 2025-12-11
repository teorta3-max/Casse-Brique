#include "cassebrique.h"

int balleX = 25;
int balleY = 26;
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

void updateTableau(char tab[30][50], int posPlanche)
{
    tab[balleY][balleX] = ' ';

    balleX += dx;
    balleY += dy;

    if (balleX <= 1 || balleX >= 48)
    {
        dx = -dx;
    }

    if (balleY <= 1)
    {
        dy = -dy;
    }
    // Colition avec les blocs
    if (tab[balleY-1][balleX] == '#'){
        dy = -dy;
        tab[balleY-1][balleX] = ' ';
    }
    // Collision avec la planche
    if (balleY == 26 && balleX >= posPlanche - 2 && balleX <= posPlanche +2)
    {
        dy = -1;
        if (balleX == posPlanche)
        {
            dx = 0;
        }
        else if (balleX > posPlanche)
        {
            dx = -1;
        }
        else if (balleX < posPlanche)
        {
            dx = 1;
        }
    }
    for (int i = -2; i < 3; i++){
        tab[27][posPlanche + i] = '=';
        tab[27][posPlanche - 3] = ' ';
        tab[27][posPlanche + 3] = ' ';
    }
    
    
    tab[balleY][balleX] = 'O';
}

char input()
{
    if (_kbhit())
    {
        return (char)_getch();
    }
    return 0;
}

int analyze_input(char input, int pos, int loop)
{
    if (input == 'q' && pos != 4 || input == 'a' && pos != 3)
    {
        return +1;
    }
    else if (input == 'd' && pos != 46)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int quit(int loop, char input)
{
    if (input == 's')
    {
        return 0;
    }
    return 1;
}