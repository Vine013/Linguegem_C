#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia;
	
	printf("Digite um número representando um dia da semana...\n 1 - Domingo\n 2 - Segunda-feira\n 3 - Terça-feira\n 4 - Quarta-feira\n 5 - Quinta-feira\n 6 - Sexta-feira\n 7 - Sábado\n Dia da semana: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("Domingo é final de semana =) \n");
				break;
				
		case 2:
			printf("Segunda-feira é dia útil! \n");
				break;
				
		case 3:
			printf("Terça-feira é dia útil! \n");
				break;
				
		case 4:
			printf("Quarta-feira é dia útil! \n");
				break;
				
		case 5:
			printf("quinta-feira é dia útil! \n");
				break;
				
		case 6:
			printf("sexta-feira é dia útil! \n");
				break;
				
		case 7:
			printf("Sábado é final de semana =) \n");
				break;
				
		default:
			printf("Dia inválido =( \n");
		}
		
		system("pause");
}
	
	
