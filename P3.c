//NOME: RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012
/*#include <stdlib.h>

void dectobin(int numero, char result[]){
			int i,nb;
			for(nb = 0; numero >= (1 << nb); nb++);{
			for(i=nb-1;i>=0;i--){
				if(numero%2==0){
					result[i] = '0';
				}else{
					result[i]= '1';
				}numero = numero/2;
			}
			}
}

int main(){
	int inteiro,o;
	printf("****OPERACOES****\n");
	printf("1-NOT\n2-AND\n3-OR\n4-XOR\n5-RIGHT SHIFT\n6-LEFT SHIFT\n");
	scanf("%d",&o);
	switch(o){
		case 1:
			printf("\n\ndigite um numero: \n");
			scanf("%d",&inteiro);
			printf("NOT %d",);
			break;
			case 2:
				break;
				case 3:
					break;
					case 4:
						break;
						case 5:
							break;
							case 6:
								break;
							
	}
	char bits[32];
	scanf("%d",&inteiro);
	getchar();
	dectobin(inteiro,bits);		
	printf("\n%s",bits);	
	
}
*/

#include <stdio.h>

void printbits(unsigned int num, int len) 
{
	if(len != 0) 
	{
	printbits(num/2, len-1);
	printf("%d", (num%2));
	}	
}
int main()
{
	int d, x, y, resultado;
	printf("                          CALCULADORA DE BITWISE\n\n\n");
	printf("1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift");
	printf("\n\nDigite uma opcao: ");
	scanf("%d", &d);
	switch(d)
	{
		case 1:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\nNOT %d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			resultado=~x;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
		case 2:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			printf(" AND %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=x&y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
		case 3:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			printf(" OR %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=x|y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
		case 4:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			printf(" XOR %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=x^y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
		case 5:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			printf(" >> %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=x>>y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
		case 6:
			printf("\n\nDigite um numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n\nDigite outro numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("(");
			printbits(x, 32);
			printf(")");
			printf(" << %d", y);
			printf("(");
			printbits(y, 32);
			printf(")");
			resultado=x<<y;
			printf(" : %d", resultado);
			printf("(");
			printbits(resultado, 32);
			printf(")");
			break;
	}
	getch();
	return 0;
}


