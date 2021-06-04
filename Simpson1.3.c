int simpson(){
	int n, i=100;
	float x[i],y[i],z[i],a,b,h,I=0,sp=0,si=0,sumpar=0,sumim=0;// float hfin=0,E=0,cuarta=0,sumE=0;
	printf("\t\tSIMPSON 1/3");
	printf("\n\nCuantas columnas tendra tu tabla? ");
	scanf("%d",&n);
	printf("introduce los valores de x: ");
	for(i=0;i<n;i++){
		printf("\nx(%i)= ",i);
		scanf("%f", &x[i]);
	}
	system("cls");
	printf("introduce los valores de y: ");
	for(i=0;i<n;i++){
		printf("\ny(%i)= ",i);
		scanf("%f", &y[i]);
	}
	system("cls");
	printf("x\t\tf(x)");
	for(i=0;i<n;i++){
		printf("\n%.6f\t|%.6f",x[i],y[i]);
	}
	/*
	printf("\nValor de la cuarta derivada evaluada en x barra= ");
	scanf("%f",&cuarta);
	*/
	a=x[0];
	b=x[n-1];
	h=(b-a)/(n-1);
	printf("\n\na= %f\tb= %f\th= %f",a,b,h);
	/*for(i=1;i<n-1;i++){
		z[i]=y[1]+i*(h);
		printf("\n%f",z[i]);
	}*/
	for(i=1;i<n-1;i++){
		if(i%2==0){
			sp=sp+y[i];
		}}
		//printf("\n La suma de los pares es: %f",sp);
		for(i=1;i<n-1;i++){
		if(i%2!=0){
			si=si+y[i];
		}
	}
	//printf("\n La suma de los impares es: %f\n",si);
	sumpar=2*sp;
	sumim=4*si;
	//hfin=h/3;
	//printf("\n%f\t%f\n\t%f\t%f\t%f",sumpar,sumim,hfin,y[0],y[n-1]);
	
	I=(h/3)*(y[0]+sumpar+sumim+y[n-1]);
	printf("\n\nI= %f",I);
	/*
	E=-(1/90)*(pow(h,5))*(cuarta);
	sumE=I+E;
	printf("+ E= %f",sumE);
	*/
	printf("\n\n");
	system("pause");
}
