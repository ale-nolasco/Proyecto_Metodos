int Lagrange()
{
	int n, x, y;
	float z,w,test,Ffinal,u,d;
	Ffinal=0;
	u=d=1;
	printf("POLONIMIO DE LAGRANGE");
	printf("\n\nCuantas columnas: ");
	scanf("%d", &n);
	float px[n],py[n];
	printf("\nIngresa los valores de x: \n");
	for (x = 0; x < n; x++){ //llena valores en x
			printf( "x(%d): ", x);
			scanf("%f", &px[x]);
	}
	printf("\nIngresa los valores de y: \n");
	for (x = 0; x < n; x++){ //llena valores en y
			printf( "y(%d): ",x);
			scanf("%f", &py[x]);
	}
	printf("\nValor a evaluar: ");
	scanf("%f", &test);
	
	for (x = 0; x<n ; x++){
		for (y = 0; y<n ; y++){
			if (y!=x){
				u = u*(test-px[y]);
				d = d*(px[x]-px[y]);
			}
			else{
			}
		}
			
	Ffinal = Ffinal + (py[x]*(u/d));
	u=d=1;	
	}
	printf("f(%.1f)= %f", test, Ffinal);
	printf("\n");
	return 0;
}
