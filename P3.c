//NOME: RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012

#include <stdlib.h>

void decparabin(unsigned int n,int bit){

 int r; 
 int i; 

 for(i = bit-1; i >= 0; i--){
    r = n >> i;
     if(r & 1) {
        printf("1");
     }else {
        printf("0");
     }
 }
}

int main(){
	int inteiro,inteiro2,o,result;
	printf("****OPERACOES****\n");
	printf("1-NOT\n2-AND\n3-OR\n4-XOR\n5-RIGHT SHIFT\n6-LEFT SHIFT\n");
	scanf("%d",&o);
	switch(o){
				case 1:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("NOT %d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(": %d",~inteiro);
					printf("(");
					decparabin(~inteiro,32);
					printf(")\n");
					break;
				case 2:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("digite um numero: \n");
					scanf("%d",&inteiro2);
					printf("%d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(" AND ");
					printf("%d",inteiro2);
					printf("(");
					decparabin(inteiro2,32);
					printf(")");
					result=inteiro&inteiro2;
					printf(": %d",result);
					printf("(");
					decparabin(result,32);
					printf(")\n");
					break;
				case 3:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("digite um numero: \n");
					scanf("%d",&inteiro2);
					printf("%d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(" OR ");
					printf("%d",inteiro2);
					printf("(");
					decparabin(inteiro2,32);
					printf(")");
					result=inteiro|inteiro2;
					printf(": %d",result);
					printf("(");
					decparabin(result,32);
					printf(")\n");
					break;
				case 4:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("digite um numero: \n");
					scanf("%d",&inteiro2);
					printf("%d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(" XOR ");
					printf("%d",inteiro2);
					printf("(");
					decparabin(inteiro2,32);
					printf(")");
					result=inteiro^inteiro2;
					printf(": %d",result);
					printf("(");
					decparabin(result,32);
					printf(")\n");
					break;
				case 5:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("digite um numero: \n");
					scanf("%d",&inteiro2);
					printf("%d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(" >> ");
					printf("%d",inteiro2);
					printf("(");
					decparabin(inteiro2,32);
					printf(")");
					result=inteiro>>inteiro2;
					printf(": %d",result);
					printf("(");
					decparabin(result,32);
					printf(")\n");
					break;
				case 6:
					printf("\n\ndigite um numero: \n");
					scanf("%d",&inteiro);
					printf("digite um numero: \n");
					scanf("%d",&inteiro2);
					printf("%d",inteiro);
					printf("(");
					decparabin(inteiro,32);
					printf(")");
					printf(" << ");
					printf("%d",inteiro2);
					printf("(");
					decparabin(inteiro2,32);
					printf(")");
					result=inteiro<<inteiro2;
					printf(": %d",result);
					printf("(");
					decparabin(result,32);
					printf(")\n");
					break;												
	}
	
}



		
