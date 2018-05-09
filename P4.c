//NOME: RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012

#include <stdio.h>
int main(){
	char numero[256];
	int n,i;
	scanf("%s",numero);
	getchar();
		for(i=0;numero[i]!='\0';i++){
		if(numero[i]>=48 && numero[i]<=57){
		numero[i]=numero[i]-'0';
		n=n*10+numero[i];}}
		printf("%d",n);
}
