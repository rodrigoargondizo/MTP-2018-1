//NOME: Rodrigo Faria Argondizo
//MATRICULA: 11721EAU012
#include <stdio.h>

int main(){
	
	int estado=0, i,j=0;
	char bits[256];
	scanf("%s",&bits);
		
	for(i=0;bits[i]!='\0';i++){
		if(estado==0 && bits[i]=='0')estado=0;else
		if(estado==0 && bits[i]=='1')estado=1;else
		if(estado==1 && bits[i]=='0')estado=2;else
		if(estado==2 && bits[i]=='0')estado=1;else
		if(estado==2 && bits[i]=='1')estado=2;else
		if(estado==1 && bits[i]=='1')estado=0;
		
	}
	printf("estado vale %d\n", estado);
	printf("%s", bits);
	if(estado==0)printf(" e multiplo de 3");
	else printf(" nao e multiplo de 3");
		
}
