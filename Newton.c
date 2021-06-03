void NewtonS()
{
	int n, x, y,m;
	double h,w,test,Yfinal,a,dy,d;
	Yfinal=dy=0;
	double u;
	u=a=1;
	system("cls");
	Centrar_texto("POLINOMIO DE NEWTON (hacia atras)",1);
	printf("\n\nCuantas filas tiene la tabla: ");
	scanf("%d",&n);
	double px[n],py[n],c[n];
	for (x = 0; x < n-1; x++){ //hace 0 C
			c[x]=0;
	}
	printf("\nIngresa los valores de x: \n");
	for (x = 0; x < n; x++){ //llena valores en x
			printf("\nx[%d] : ",x);
			scanf("%f",&px[x]);
	}
	printf("\nIngresa los valores de y: \n");
	for (x = 0; x < n; x++){ //llena valores en y
			printf("\ny[%d]:", x);
			scanf("%f",&py[x]);
	}
	printf("\n\nValor a evaluar(xk): ");
	scanf("%f",&test);
	h =abs(px[1]-px[0]);
	c[0]=py[n-1];
	for (x=1 ; x<n ; x++){
		m=1;
		dy=0;
		u=1;
		u = u*(x);
		for (y = 1 ; y<=x ; y++){
			dy =dy + ((u)*(pow(-1,y))*(py[n-y-1]));
			w=(x-y);
			d=(y+1);
			u = u*(w/d);
		}
		dy = dy + py[n-1];
		for(y=1;y<=x;y++){
			m=m*y;
		}
		c[x]=(dy)/(m*pow(h,x));
	}
	
	
	for (x=1; x<n;x++){
		for (y=1 ; y<=x ; y++){
			a = a*(test-px[n-y]);
		}
		a = a * c[x];
		Yfinal= Yfinal+a;
		a=1;
	}
	Yfinal = Yfinal + c[0];
	printf("\n\nyk= %f\n",Yfinal);
	
}

void NewtonE()
{
	int n, x, y,m;
	double h,w,test,Yfinal,a,dy,d;
	Yfinal=dy=0;
	double u;
	u=a=1;
	system("cls");
	printf("POLINOMIO DE NEWTON (hacia adelante)",1);
	printf("\n\nCuantas filas tiene la tabla: ");
	scanf("%d",&n);
	double px[n],py[n],c[n];
	for (x = 0; x < n-1; x++){ //hace 0 C
			c[x]=0;
	}
	printf("\nIngresa los valores de x:\n");
	for (x = 0; x < n; x++){ //llena valores en x
			printf("\nx[%d] : ",x);
			scanf("%f",&px[x]);
	}
	printf("\nIngresa los valores de y:\n");
	for (x = 0; x < n; x++){ //llena valores en y
			printf("\ny [%d] : ",x);
			scanf("%f",&py[x]);
	}
	printf("\nValor a evaluar (xk): ");
	scanf("%f",&test);
	h =abs(px[1]-px[0]);
	c[0]=py[0];
	for (x=1 ; x<n ; x++){
		m=1;
		dy=0;
		u=1;
		u = u*(x);
		for (y = 1 ; y<=x ; y++){
			dy =dy + ((u)*(pow(-1,y))*(py[x-y]));
			w=(x-y);
			d=(y+1);
			u = u*(w/d);
		}
		
		dy = dy + py[x];
		for(y=1;y<=x;y++){
			m=m*y;
		}
		
		c[x]=(dy)/(m*pow(h,x));
	}
	
	for (x=1; x<n;x++){
		for (y=0 ; y<x ; y++){
			a = a*(test-px[y]);
		}
		a = a * c[x];
		Yfinal= Yfinal+a;
		a=1;
	}
	Yfinal = Yfinal + c[0];
	printf("\nyk = %f\n",Yfinal);
}

int Newton()
{
	int opcion, resp;
	do
	{
		printf("\n\t1- Newton (hacia adelante)\n");
		printf("\n\t2- Newton (hacia atras)\n");
		printf("Selecciona una opcion: ");
		scanf("%d",&opcion);
		system("cls");
		switch (opcion)
		{
			
			case 1:
				NewtonE();
				break;
			case 2:
				NewtonS();
				break;
			
			default: printf("Introduce un numero correcto");
		}
		printf("\nPresione 1 para volver al menu, cualquier otra tecla para salir... ");
		scanf("%d",resp);
		}while(resp==1);
}
