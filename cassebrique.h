#ifndef cassebrique_h
#define cassebrique_h
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void remplirTableau(char tab[30][50]);
void afficherTablzeau(char tab[30][50]);
void updateTableau(char tab[30][50], int posballe_X, int posballe_Y, int posPlanche);
void TableauDeBase(char tab[30][50]);
char input();
int analyze_input(char input, int pos);
#endif