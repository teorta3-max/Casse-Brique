#include <conio.h>
#include <stdio.h>

int input()
{
    if (khbhit())
    {
        return (char)getch();
    }
    return 0;
}