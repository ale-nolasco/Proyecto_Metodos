
void PideDatos(int *Dim, float Sist[][102]);
void EscribeDatos(int Dim, float Sist[][102]);
void ResuelveGauss(int Dim, float Sist[][102]);


int Spline()
{
    int C,Dimension;
    float Sistema[101][102];
    PideDatos(&Dimension,Sistema);
    ResuelveGauss(Dimension,Sistema);
    printf("\n\n\nLas soluciones son:\n");
    for(C=1;C<=Dimension;C++) printf("\n X%d=%f\n",C,Sistema[C][Dimension+1]);
   
    scanf("");
    return(0);
}


void PideDatos(int *Dim,float Sist[][102])
{
	
	int A,B,i,j,k,puntos,incognitas;
	float X[5],Y[5], Matriz[20][20];
	
	Centrar_texto("Spline Cubico (3 o 4 puntos evaluados)",1);
	printf("\n\nNumero de puntos evaluados: ");
	scanf("%d",&puntos);
	
	incognitas = (puntos-1) * 4;
	*Dim = incognitas;
	for(i=0;i<puntos;i++){
		printf("Valor x[%d]= ",i);
		scanf("%f",&X[i]);
		printf("Valor y[%d]= ",i);
		scanf("%f",&Y[i]);		
	}
		
	printf("\n\n");
	
	switch(incognitas){
		
		case 8:{
			
			float a1[8] = {pow(X[0],3),pow(X[0],2),X[0],1,0,0,0,0};
			float a2[8] = {pow(X[1],3),pow(X[1],2),X[1],1,0,0,0,0};
			float a3[8] = {0,0,0,0,pow(X[1],3),pow(X[1],2),X[1],1};
			float a4[8] = {0,0,0,0,pow(X[2],3),pow(X[2],2),X[2],1};
			float a5[8] = {3*pow(X[1],2),2*X[1],1,0,-3*pow(X[1],2),-2*X[1],-1,0};
			float a6[8] = {6*X[1],2,0,0,-6*X[1],-2,0,0};
			float a7[8] = {6*X[0],2,0,0,0,0,0,0};
			float a8[8] = {0,0,0,0,6*X[2],2,0,0};
			float ind[8] = {Y[0],Y[1],Y[1],Y[2],0,0,0,0};
	
			for(i=0;i<incognitas;i++){
				for(j=0;j<incognitas;j++){
				
					switch(i){
						case 0:{
							Matriz[i][j] = a1[j];
							break;
						}
						case 1:{
							Matriz[i][j] = a2[j];
							break;
						}
						case 2:{
							Matriz[i][j] = a3[j];
							break;
						}
						case 3:{
							Matriz[i][j] = a4[j];
							break;
						}
						case 4:{
							Matriz[i][j] = a5[j];
							break;
						}
						case 5:{
							Matriz[i][j] = a6[j];
							break;
						}
						case 6:{
							Matriz[i][j] = a7[j];
							break;
						}
						case 7:{
							Matriz[i][j] = a8[j];
							break;
						}
					}
				}
			}
			for(i=0;i<incognitas;i++){
				for(j=0;j<incognitas;j++){
				
					printf("\t%.2f",Matriz[i][j]);

				}
				printf("\t|\t%.2f",ind[i]);
				printf("\n");
			}
							  for(A=1;A<=*Dim;A++) 
				for(B=1;B<=*Dim;B++){
					Sist[A][B]=Matriz[A-1][B-1];
					}
		    for(A=1;A<=*Dim;A++){
		        Sist[A][*Dim+1]=ind[A-1];
		    }
			break;
		}
		case 12:{
			
			float a1[12] = {pow(X[0],3),pow(X[0],2),X[0],1,0,0,0,0,0,0,0,0};
			float a2[12] = {pow(X[1],3),pow(X[1],2),X[1],1,0,0,0,0,0,0,0,0};
			float a3[12] = {0,0,0,0,pow(X[1],3),pow(X[1],2),X[1],1,0,0,0,0};
			float a4[12] = {0,0,0,0,pow(X[2],3),pow(X[2],2),X[2],1,0,0,0,0};
			float a5[12] = {0,0,0,0,0,0,0,0,pow(X[2],3),pow(X[2],2),X[2],1};
			float a6[12] = {0,0,0,0,0,0,0,0,pow(X[3],3),pow(X[3],2),X[3],1};
			float a7[12] = {3*pow(X[1],2),2*X[1],1,0,-3*pow(X[1],2),-2*X[1],-1,0,0,0,0,0};
			float a8[12] = {0,0,0,0,3*pow(X[2],2),2*X[2],1,0,-3*pow(X[2],2),-2*X[2],-1,0};
			float a9[12] = {6*X[1],2,0,0,-6*X[1],-2,0,0,0,0,0,0};
			float a10[12] = {0,0,0,0,6*X[2],2,0,0,-6*X[2],-2,0,0};
			float a11[12] = {6*X[3],2,0,0,0,0,0,0,0,0,0,0};
			float a12[12] =	{0,0,0,0,0,0,0,0,6*X[0],2,0,0};
			
			float ind[12]={Y[0],Y[1],Y[1],Y[2],Y[2],Y[3],0,0,0,0,0,0};
	
			for(i=0;i<incognitas;i++){
				for(j=0;j<incognitas;j++){
				
					switch(i){
						case 0:{
							Matriz[i][j] = a1[j];
							break;
						}
						case 1:{
							Matriz[i][j] = a2[j];
							break;
						}
						case 2:{
							Matriz[i][j] = a3[j];
							break;
						}
						case 3:{
							Matriz[i][j] = a4[j];
							break;
						}
						case 4:{
							Matriz[i][j] = a5[j];
							break;
						}
						case 5:{
							Matriz[i][j] = a6[j];
							break;
						}
						case 6:{
							Matriz[i][j] = a7[j];
							break;
						}
						case 7:{
							Matriz[i][j] = a8[j];
							break;
						}
						case 8:{
							Matriz[i][j] = a9[j];
							break;
						}
						case 9:{
							Matriz[i][j] = a10[j];
							break;
						}
						case 10:{
							Matriz[i][j] = a11[j];
							break;
						}
						case 11:{
							Matriz[i][j] = a12[j];
							break;
						}
					}
				}
			}
			for(i=0;i<incognitas;i++){
					for(j=0;j<incognitas;j++){
					
						printf("\t%.2f",Matriz[i][j]);
					}
					printf("\t|\t%.2f",ind[i]);
					printf("\n");
				}
		  	for(A=1;A<=*Dim;A++) 
				for(B=1;B<=*Dim;B++){
					Sist[A][B]=Matriz[A-1][B-1];
				}
			for(A=1;A<=*Dim;A++){
		        Sist[A][*Dim+1]=ind[A-1];
		    }
			break;
		}
	}
}

void ResuelveGauss(int Dim, float Sist[][102])
{
    int NoCero,Col,C1,C2,A;
    float Pivote,V1;
   
    for(Col=1;Col<=Dim;Col++){
        NoCero=0;A=Col;
        while(NoCero==0){
           if((Sist[A][Col]>0.0000001)||((Sist[A][Col]<-0.0000001))){
                NoCero=1;}
            else A++;}
        Pivote=Sist[A][Col];
        for(C1=1;C1<=(Dim+1);C1++){
            V1=Sist[A][C1];
            Sist[A][C1]=Sist[Col][C1];
            Sist[Col][C1]=V1/Pivote;}
        for(C2=Col+1;C2<=Dim;C2++){
            V1=Sist[C2][Col];
            for(C1=Col;C1<=(Dim+1);C1++){
                Sist[C2][C1]=Sist[C2][C1]-V1*Sist[Col][C1];}
    }}
   
    for(Col=Dim;Col>=1;Col--) for(C1=(Col-1);C1>=1;C1--){
        Sist[C1][Dim+1]=Sist[C1][Dim+1]-Sist[C1][Col]*Sist[Col][Dim+1];
        Sist[C1][Col]=0;
    }
}
