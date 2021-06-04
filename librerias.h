#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include "Portada.c"
#include "Menu.c"
#include "Lagrange.c"
#include "Newton.c"
#include "Spline.c"
#include "Trapecio.c"
#include "Simpson1.3.c"
#define e 2.718281828

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

float cuadrado(float z) {
float resulta;
    
    resulta=pow(z, 2);
    return resulta;
}

double fun(double x){
double a;
a = (2 - pow (e, x) + x*x)/3;
return a;
}
