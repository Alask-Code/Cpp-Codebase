#include <stdlib.h>
#include <stdio.h>

int main() {

//Declara variaveis;
char x;
float valor, desc, total;

//Obtem o valor da compra;
	printf("\nDigite o valor da compra: ");
	scanf("%f", &valor);

//Exibe as opcoes na tela;
	printf("\nDigite a letra que representa o seu desconto de acordo com a cor:");
	printf("\n a. azul");
	printf("\n b. vermelho");
	printf("\n c. branco");

//Obtem a opcao selecionada;
	printf("\nDigite sua opcao:");
	scanf("%s", &x);

//Selecao de casos;
switch(x)
{
	
//Caso 1;
case 'a':
	printf("Voce escolheu azul, seu desconto sera de 30 por cento");
	desc=valor*0.30;
	total=valor-desc;
	printf("\nO valor da sua compra e: %.2f",total);
break;

//Caso 2;
case 'b':
	printf("Voce escolheu vermelho, seu desconto sera de 20 por cento");
	desc=valor*0.20;
	total=valor-desc;
	printf("\nO valor da sua compra e: %.2f",total);
break;

//Caso 3;
case 'c':
	printf("Voce escolheu branco, seu desconto sera de 10 por cento");
	desc=valor*0.10;
	total=valor-desc;
	printf("\nO valor da sua compra e: %.2f\n", total);
break;

//Caso padrao;
default:
 	printf("opcao invalida");
}

return 0;
}
