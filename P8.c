//NOME:RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float *vetor, int tam){
    int i;
    float num;
    for(i = 0; i < tam; i++){
    vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
    }
}

float somatorio(float *ax,float *bx){

    if(ax==bx)
        return 0;
    else
        return  *ax + somatorio(ax+1, bx);

}

float produto(float *ax,float *bx){
 	
	if(ax==bx)
    return 1;
 	else
    return *ax*produto(ax+1, bx);

}


 int main (){
 	
     srand(123456);
    
	 int opcao, size=100;
     float *x;
     x = calloc(100, sizeof(float));
     gera_numeros(x,size);
    
	 printf("ESCOLHA A OPCAO ABAIXO: \n1-SOMATORIO\n2-PRODUTO\n");
            scanf("%d",&opcao);
            getchar();
            switch(opcao){
                case 1:
                   printf("%f\n", somatorio(x,x+size));
                   break;
                case 2:
                    printf("%f\n", produto(x,x+size));
                    break;
            }
            free(x);
            return 0;
}
 

