#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("Digite um n�mero representando um dia da semana...\n 1 - Domingo\n 2 - Segunda-feira\n 3 - Ter�a-feira\n 4 - Quarta-feira\n 5 - Quinta-feira\n 6 - Sexta-feira\n 7 - S�bado\n Dia da semana: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo � final de semana =) \n");
				break;
				
		case 2:
			printf("Segunda-feira � dia �til! \n");
				break;
				
		case 3:
			printf("Ter�a-feira � dia �til! \n");
				break;
				
		case 4:
			printf("Quarta-feira � dia �til! \n");
				break;
				
		case 5:
			printf("quinta-feira � dia �til! \n");
				break;
				
		case 6:
			printf("sexta-feira � dia �til! \n");
				break;
				
		case 7:
			printf("S�bado � final de semana =) \n");
				break;
				
		default:
			printf("Dia inv�lido =( \n");
		}
		
		system("pause");
}
	
	
