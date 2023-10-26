#include <stdio.h>
#include <stdlib.h>

int main( ) {
//Declara variaveis;
	int a, b, c;

//Obtem os valores dos lados do tringulo;
	printf("Informe abaixo a medida dos lados do triangulo apertando a Tecla ENTER apos cada medida:\n\n");
	scanf("%d %d %d", &a, &b, &c);

//Se seguir a condiçoes dos lados caberem uns nos outros;
	if(a<=b+c && b<=a+c && c<=a+b){
		printf("\nDadas as medidas: %d, %d, %d, temos um triangulo, ", a, b, c);

	//Caso todos os lados sejam iguais;
	if( a == b && a == c){
		printf("este e um triangulo EQUILATERO!");
	}
	//Caso pelo menos um lado seja diferente;
	else if(a==b||a==c||b==c){
		printf("este e um triangulo ISOSCELES!");
	}
	//Caso todos os lados sejam diferentes;
	else {
		printf("este e um triangulo ESCALENO!");
	}
	
}

//Se não couber, nao e possivel formar um triangulo;
else printf("\nAs medidas fornecidas, %d,%d,%d nao formam um triangulo", a, b, c);
return 0;
}
