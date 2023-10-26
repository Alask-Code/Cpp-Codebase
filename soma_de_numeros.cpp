#include <stdio.h>

int main() {
    // Declaração das variáveis
    int numero1, numero2, soma;

    // Solicita ao usuário para inserir o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    // Solicita ao usuário para inserir o segundo número
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Calcula a soma dos números
    soma = numero1 + numero2;

    // Exibe o resultado
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
