#include "cassebrique.h"

int main()
{
    char grille[30][50];
    int posPlat_x = 23;
    int posPlat_y = 27;
    int posBall_x = 25;
    int posBall_y = 26;

    srand(time(NULL));

    remplirTableau(grille);
    TableauDeBase(grille);
    grille[posBall_y][posBall_x] = 'O';
    afficherTableau(grille);

    while (1)
    {
        if (_kbhit())
        {
            char c = _getch();
            if (c == 'q' && posPlat_x > 1)
                posPlat_x--;
            else if (c == 'd' && posPlat_x < 45)
                posPlat_x++;
            else if (c == 'x')
                break;
        }

        updateTableau(grille, posBall_x, posBall_y, posPlat_x);

        system("cls");
        afficherTableau(grille);

        Sleep(100);
    }

    return 0;
}