#include "librerias.h"

int main()
{
	int menu;
	int resp;
	setlocale(LC_ALL, "");
	Portada();
	
	do{
	   	system("cls");
	   	menu=Menu();
	   	if(menu==6)
	   	{
	   		break;
	   	}
	   	else{
		   switch(menu)
		   {
			   case 1: {
			   		system("cls");
					Lagrange();
				break;
			   }
			   case 2:{
					system("cls");
					Newton();
				break;
			   }
			   case 3:{
			   		system("cls");
			   	 	Spline();
				break;
			   }
			   case 4:{
			   		system("cls");
			   		Trapecio();
				break;
			   }
			   case 5:{
			   	
				break;
			   }
	   		}
	   		printf("\n\n¿Deseas realizar otra operacion? (1=Si, 0=No) : ");
	   		scanf("%d",&resp);
	   	}
    }while(resp == 1);
    return(0);
}
