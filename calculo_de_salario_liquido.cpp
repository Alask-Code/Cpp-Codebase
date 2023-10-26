#include <stdio.h>

int main(){
	//Declara as variaveis;
	float salarioBruto,inss,alir, salarioLiquido;
	
	//Recebe o salario bruto;
	printf("Digite seu salario: ");
	scanf("%f",&salarioBruto);

//Obtem o valor do desconto do inss;
	if(salarioBruto<=1693.72){
		inss = salarioBruto * 0.08;
	}else{
	if(salarioBruto >=1693.73 && salarioBruto <= 2822.90){
		inss = salarioBruto * 0.09;
	}else{
		if(salarioBruto >= 2822.91 && salarioBruto <= 5646.90){
		inss = salarioBruto * 0.11;
	}else{
	if(salarioBruto > 5646.90){
		inss = 621.04;
	}
	}
	}	
	}
	
//Obtem	o valor do imposto de renda;
	if(salarioBruto<=1903.98){
		alir=0;		
	}else{
		if(salarioBruto >=1903.99 && salarioBruto <= 2826.65){
		alir=0.75;	
	}else{
		if(salarioBruto >=2826.66  && salarioBruto <= 3751.05){
		alir=0.15;	
	}else{
		if(salarioBruto >=3751.06 && salarioBruto <=4664.68 ){
		alir=0.225;	
	}else{
		if(salarioBruto > 4664.68){
		alir=0.275;	
	}
	}
	}
	}	
	}

	//Exibe os valores em tela;	
	salarioLiquido = (salarioBruto - inss)- alir;
	printf("\nSeu desconto de inss e: %.2f",inss);
	printf("\nSua aliquota de imposto de renda e de: %.2f",alir);
	printf("\nSeu salario liquido e: %.2f",salarioLiquido);
return 0;
}

