#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declara��o de vari�veis
	float P;
	float E = 0;
	float M = 0;
	
			//Entrada de dados
	printf("\nDigite o peso do peixe em kg: ");
	scanf("%f", &P);
	
			//Processamento e Sa�da de dados
	if(P > 50){
		E = P - 50;
		M = E * 4;
		printf("\nO excesso de peso do seu peixe foi de %.2f kg\n", E);
		printf("O valor total da multa que dever� pagar ser� de R$ %.2f\n", M);
	}
	else
		printf("\nO peso do seu peixe est� dentro do regulamentado =)\n");
		
	return 0;
}
