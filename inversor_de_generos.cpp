#include <stdio.h>

int main() {
    int homens, mulheres, troca;

    printf("Escreva a quantidade de homens: ");
    scanf("%d", &mulheres);
    
    printf("Escreva a quantidade de mulheres: ");
    scanf("%d", &homens);

    printf("A quantidade de homens �: %d\n", homens);
    printf("A quantidade de mulheres �: %d\n", mulheres);
    
    printf("Ops! os valores foram trocados! Realizando a troca...\n");

    troca = homens;
    homens = mulheres;
    mulheres = troca;

    printf("Dados trocados com sucesso!\n");
    
    printf("A quantidade correta de homens �: %d\n", homens);
    printf("A quantidade correta de mulheres �: %d\n", mulheres);

    return 0;
}
