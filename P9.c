//Nome: RODRIGO FARIA ARGONDIZO
//MATRICULA: 11721EAU012


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dimensoes{
	float largura;
	float profundidade;
	float altura;
};

struct produto{
	char numero[101];
	char nome[64];
	float preco;
	float dimensoes;
	struct dimensoes end;
};

struct produto produtos[100];

void cadastrar(){
	struct produto;
	int i = 0;
	printf("\n\nNumero do produto a ser cadastrado: ");
		scanf("%s",produtos[i].numero);
	printf("\nNome: ");
		scanf("%s",produtos[i].nome);
		getchar();
	printf("\nDigite o preco: ");
		scanf("%f", &produtos[i].preco);
		getchar();
	printf("\nDigite a largura: ");
		scanf("%f", &produtos[i].end.largura);
		getchar();
	printf("\nDigite a produndidade: ");
		scanf("%f", &produtos[i].end.profundidade);
		getchar();
	printf("\nDigite a altura: ");
		scanf("%f", &produtos[i].end.altura);
	printf("\n\nProduto %s cadastrado com sucesso!\n\n", produtos[i].numero);
}

void consultar(){
	char numero_consulta[101];
	int i = 0, flag = 0;
	printf("\n\nDigite o numero do produto: ");
		fflush(stdin);
		gets(numero_consulta);
	
	for(i = 0 ; i < 101; i++){	
		if(strcmp(numero_consulta, produtos[i].numero) == 0){
			flag = 1;
			printf("\n\n%s, R$ %.2f, ",produtos[i].nome, produtos[i].preco);
			printf("L: %.2fm x P: %.2fm x A: %.2fm\n\n", produtos[i].end.largura, 				
			produtos[i].end.profundidade, produtos[i].end.altura);
			break;
		}
	}
	if(flag == 0){
		printf("\n\nProduto nao cadastrado.\n\n");
		return;
	}
}


int main (){

	int opcao;
	int i = 0;

	struct produto produtos;
	
	do{
	printf("1-Cadastrar\n2-Consultar\n3-Sair\n");
	scanf("%d", &opcao);
	getchar();
		switch(opcao){
			case 1:
				cadastrar();
				break;
			case 2:
				consultar();
				break;
			case 3:
				return 0;
		}
	}while (opcao != 4);

	return 0;	
}
