int Menu()
{
	int resp;	
	do{
	system("cls");
	Centrar_texto("Interpolación Polinomial",4);
	printf("\n\n\n 1.- Fórmula de Lagrange");
	printf("\n 2.- Fórmula de Newton");
	Centrar_texto("Ajuste de curvas",10);
	printf("\n\n\n 3.- Spline Cúbico");
	Centrar_texto("Newton Cotes",15);
	printf("\n\n\n 4.- Regla Trapezoidal");
	printf("\n 5.-	");	
	printf("\n\n 6.- Salir");
	printf("\n\n¿Que opcion deseas?: ");
	scanf("%d",&resp);
	if( resp < 1 || resp > 6)
	{
	   printf("\nIngresaste una opcion no valida\n\n");
	   system("pause");
    }
	}while( resp < 1 || resp > 6);
	return resp;
}
