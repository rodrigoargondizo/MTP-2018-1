//NOME: RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012

#include <stdio.h>

int funcao(int x, int y){
	int aux=0;
	if (x == 0){
		return y+1;
	}else if (y == 0){
		return funcao(x - 1, 1);
	}else{
		aux = funcao(x, y - 1);
		return funcao(x - 1, aux);
	}
}
 
int main(){
	int a,b,result;
	scanf("%d%d",&a,&b); 
	result = funcao(a, b);
	printf("(%d, %d) = %d\n", a, b, result);
	return 0;
}
