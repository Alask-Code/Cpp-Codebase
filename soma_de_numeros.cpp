#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    int numero1, numero2, soma;

    // Solicita ao usu�rio para inserir o primeiro n�mero
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    // Solicita ao usu�rio para inserir o segundo n�mero
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Calcula a soma dos n�meros
    soma = numero1 + numero2;

    // Exibe o resultado
    printf("A soma dos n�meros �: %d\n", soma);

    return 0;
}
