#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declara��o de vari�veis
	int n1;
	int n2;
	int opcao;
	
	do{
			//Exibi��o do menu
		printf("\nMenu de Op��es:\n");
		printf("1. Imprimir 'Ol�, mundo!'\n");
		printf("2. Imprimir a soma de dois n�meros\n");
		printf("3. Sair do programa\n");
		printf("Escolha uma op��o: ");
		scanf("%d", &opcao);
		
				//Switch case da op��o escolhida
		switch(opcao) {
			case 1:
				printf("\nOl�, mundo!\n");
				break;
			case 2:{
				
				printf("\nDigite dois n�meros para somar: ");
				scanf("%d %d", &n1, &n2);
				printf("A soma de %d + %d �: %d\n", n1,n2, n1+n2);
				break;
			}
			case 3:
				printf("\nEncerrando o programa...\n");
				break;
			default:
				printf("\nOp��o inv�lida! Tente novamente.\n");
				break;	
		}
	}	while(opcao != 3); //Repete at� a escolha de uma op��o v�lida
			
		return 0;
}
