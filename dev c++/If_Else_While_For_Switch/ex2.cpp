#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declaração de variáveis
	float sal_bruto = 0;
	float sal_liquido = 0;
	float IR = 0;
	float grat;
	float sal_base;
	
			//Entrada de dados
	printf("\nDigite o seu salário base: R$ ");
	scanf("%f", &sal_base);
	
	printf("\nDigite o valor da sua gratificação: R$ ");
	scanf("%f", &grat);
	
			//Processamento e Saida de dados
	sal_bruto = sal_base + grat;
	printf("\nO seu salário bruto é R$ %.2f\n", sal_bruto);
	
	if(sal_bruto<=1000){
		IR = sal_bruto*0.15;
		sal_liquido = sal_bruto - IR;
		printf("\nO seu salário liquido é R$ %.2f", sal_liquido);
	}
	else{
		IR = sal_bruto*0.20;
		sal_liquido = sal_bruto - IR;
		printf("\nO seu salário liquido é R$ %.2f\n", sal_liquido);
	}
	
	return 0;
}
	
	
