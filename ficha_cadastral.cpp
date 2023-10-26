#include <stdio.h>
#include <string.h> 

int main(){
	//Declaracao de variaveis;
	char nome[25],cidade[25];
	int idade, salario;
	
	//Armazena o nome;
	printf("\nDigite seu nome: ");
	scanf("%s",&nome);
	
	
	//Armazena a idade;
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	
	
	//Armazena a cidade;
	printf("\nDigite sua cidade: ");
	scanf("%s",&cidade);
	
	
	//Armazena o salario atual;
	printf("\nDigite seu salario atual: ");
	scanf("%d",&salario);
	
	
	//Exibe os valores em tela;
	printf("\nSeu nome e: %s", nome);
	printf("\nSua idade e: %d", idade);
	printf("\nSeu salario em reais e de: %d", salario);
	printf("\nVoce mora em: %s", cidade);
	return 0;
}
