#include <stdio.h>

int main() {
float larguraTotal, alturaTotal, larguraDivida, alturaDivida;
printf("Digite a largura do objeto: ");
scanf("%f", &larguraTotal);
printf("Digite a altura do objeto: ");
scanf("%f", &alturaTotal);
larguraDivida = larguraTotal / 2;
alturaDivida = alturaTotal / 2;
printf("\nO centro da largura do objeto: %.2f",larguraDivida);
printf("\nO centro da altura do objeto: %.2f",alturaDivida);
return 0;

}
