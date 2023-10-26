#include <stdio.h>

int main() {
    int num, i;

    printf("\nDIGITE UM NUMERO PARA O PROBLEMA DE COLLATZ:\n");
    scanf("%d", &num);

    i = 0;

    while (num > 1) {
        printf("%d ", num);
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = 3 * num + 1;
        }
        i++;
    }
    printf("%d\n", num);
    printf("Numero de iteracoes: %d\n", i);

    return 0;
}
