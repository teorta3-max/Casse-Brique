#ifndef cassebrique_h
#define cassebrique_h
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void remplirTableau(char tab[30][50]);
void afficherTableau(char tab[30][50]);
void updateTableau(char tab[30][50] ,int posplat_X ,int postplatY, int posPlanche);
void TableauDeBase(char tab[30][50]);
char input();
void action(int posPlat_x, int fin);

#endif