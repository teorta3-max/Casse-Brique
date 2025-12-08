#include <conio.h>
#include <stdio.h>

int input()
{
    if (khbhit()) // lit l'input de l'utilisateur
    {
        return (char)getch(); // le renvoie
    }
    return 0; // sinon renvoie rien
}