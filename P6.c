//RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012

#include<stdio.h>

float divisao(float soma, float quant){
 	float media;
	media = soma / quant;
	return media;
}

int recursoma(int soma[20], int quant) {
	
	int s=0,i=0;

	for (i=0;i<quant;i++){
		s = s + soma[i];
	}
	return s;
}

int main (){

	int n[20],i=0,q=0,resultsoma;
	float div;
	do{
		printf ("Digite um numero: (intervalo de [5~20]): \n");
		scanf("%d",&q);
		getchar();
	
	}while(q<5||q >20);
	printf("digite %d numeros: \n",q);

	for(i=0;i<q;i++){
		n[i]= 0;
	}
	for(i=0;i<q;i++){
		scanf("%d",&n[i]);	
		getchar();
	}

	resultsoma = recursoma(n,q);
		div = divisao(resultsoma,q);
		printf("os {%d} numeros sao:  ",q);

    	for(i=0;i<q;i++){
		printf ("%d ",n[i]);
    	}

    printf(",e resulta na media = %.2f\n",div);
    
    return 0;
}
