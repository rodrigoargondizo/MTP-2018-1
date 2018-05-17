//NOME: RODRIGO FARIA ARGONDIZO
//MATRÍCULA: 11721EAU012

#include<stdio.h>

int main(){
	char str[256]={'\0'},*p,*msg=str;
	int op,i=0,*ps,k[64];
	do{
		printf("1-CODIFICAR;\n2-DECODIFICAR;\n3-SAIR\n\n");
		scanf("%d",&op);
		switch(op){
		case 1:
			printf("\n\ndigite uma mensagem para ser codificada: \n");
			scanf("%s",str);
			getchar();
			for(i=0;str[i];i++){
				ps=(int *)msg;
				if(ps[i]!=0)
					printf("%d",ps[i]);
				if(ps[i+1]!=0)
					printf(", ");}
					printf("\n\n");
			break;
		case 2:
			printf("\n\ndigite uma mensagem para ser decodificada(digite enter depois 0): \n");
			printf("\nDigite uma mensagem: ");
			for(i=0;i<64;i++){
				scanf("%d",&k[i]);
				getchar();
				p=(char *)k;
				if(k[i]==0)
					break;}
				printf("%s",p);
				printf("\n\n");
			break;
	}
	}while(op!=3);
	return 0;
}
