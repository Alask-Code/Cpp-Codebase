#include <stdio.h>

int main()
{
float idade;
printf("Digite sua idade: \n");
scanf("%f", &idade);
if (idade>=18)
{
printf("Voce ja pode tirar sua carteira de Habilitacao, voce e maior de 18!");
}
else{
	printf("Voce ainda nao tem 18 anos.");
}
return 0;
}
