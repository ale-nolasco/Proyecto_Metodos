int Trapecio()
{
	int j,N;
	float i[30], x[30],fx[30];
	float A,B,H,Suma=0, SumaF=0;
	
	Centrar_texto("Regla del trapecio");
	printf("\n\nIngrese los extremos a evaluar: ");
	printf("\n\na = ");
	scanf("%f",&A);
	printf("\nb = ");
	scanf("%f",&B);
	printf("\nNumero de punto a ingresar: ");
	scanf("%d",&N);
	
	printf("\nIngrese los valores\n\n");
	
	for(j=1;j<=N;j++){
		
		printf("i[%d]= ",j);
		scanf("%f",&i[j]);
		printf("x[%d]= ",j);
		scanf("%f",&x[j]);
		printf("f(x[%d])= ",j);
		scanf("%f",&fx[j]);
	}	

	printf("\nTabla ingresada:\n");
	printf("\n\n|	i	|	x	|	f(x)	|");

	for(j=1;j<=N;j++){
		printf("\n\n|	%.2f	|	%.2f	|	%.2f	|",i[j],x[j],fx[j]);
	}
	
	H = (B-A)/N;
	
	for(j=2;j<N;j++){
		
		Suma = Suma + (2 * fx[j]);
	}
	
	SumaF= (H/2)*(fx[1] + Suma + fx[N]);
	
	printf("\n\nEl area aproximada de la funcion f(x) es = %f ",SumaF);
}
