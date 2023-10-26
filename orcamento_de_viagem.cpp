#include <stdio.h>

int main() {
int orcamento;
printf("Digite o valor do orcamento para viagem:");
scanf("%d", &orcamento);
if (orcamento >=10000)
{
printf("Joao e maria possuem orcamento para uma viagem internacional, pois seu orcamento e de %d",orcamento);
}
else
{
printf("Joao e Maria irao optar por uma viagem nacional, seu orcamento ficou em %d", orcamento);
}
return 0;
}
