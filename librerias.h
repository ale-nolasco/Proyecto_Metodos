#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include "Spline.c"
#include "Portada.c"
#include "Menu.c"
#include "Lagrange.c"
#include "Newton.c"
#include "Trapecio.c"
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

int Determinante(float Matriz[20][20],int incognitas){
	
	int i, j, k;
	float aux, pivote, pivote1, det=1;
	
	for(i=1; i<incognitas; i++){
		pivote = Matriz[i][i];
		
		for(j=i+1; j<incognitas; j++){
			
			pivote1=Matriz[j][i];
			aux = pivote1/pivote;
			
			for(k=0; k<incognitas; k++)
				Matriz[j][k] = Matriz[j][k]-(aux*Matriz[i][k]);

		}
	}
	
	for(i=0; i<incognitas; i++){
		det=det*Matriz[i][i];
	}
	
	return det;
	
}
