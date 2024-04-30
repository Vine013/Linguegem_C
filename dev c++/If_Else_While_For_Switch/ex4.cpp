#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declaração de variáveis
	int n1;
	int n2;
	int opcao;
	
	do{
			//Exibição do menu
		printf("\nMenu de Opções:\n");
		printf("1. Imprimir 'Olá, mundo!'\n");
		printf("2. Imprimir a soma de dois números\n");
		printf("3. Sair do programa\n");
		printf("Escolha uma opção: ");
		scanf("%d", &opcao);
		
				//Switch case da opção escolhida
		switch(opcao) {
			case 1:
				printf("\nOlá, mundo!\n");
				break;
			case 2:{
				
				printf("\nDigite dois números para somar: ");
				scanf("%d %d", &n1, &n2);
				printf("A soma de %d + %d é: %d\n", n1,n2, n1+n2);
				break;
			}
			case 3:
				printf("\nEncerrando o programa...\n");
				break;
			default:
				printf("\nOpção inválida! Tente novamente.\n");
				break;	
		}
	}	while(opcao != 3); //Repete até a escolha de uma opção válida
			
		return 0;
}
