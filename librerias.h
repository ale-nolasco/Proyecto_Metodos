#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include "Spline.c"
#include "Portada.c"
#include "Menu.c"
#include "Lagrange.c"

int gotoxy(int x,int y)
{
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}

int Centrar_texto(const char *texto,int y)
{ 
	int size_texto=strlen(texto);
	gotoxy(50-(size_texto/2),y);printf("%s",texto);
}
