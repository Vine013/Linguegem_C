#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int dia,mes,ano;
	
	printf("Digite uma data no formato 'dd/mm/aaaa': ");
	scanf("%i/%i/%i", &dia, &mes, &ano);	
	
	switch(mes){
		case 1:
			printf("Hoje é dia %i de Janeiro de %i \n", dia,ano );
				break;
				
		case 2:
			printf("Hoje é dia %i de Fevereiro de %i \n", dia,ano );
				break;
		
		case 3:
			printf("Hoje é dia %i de Março de %i \n", dia,ano );
				break;
				
		case 4:
			printf("Hoje é dia %i de Abril de %i \n", dia,ano );
				break;
				
		case 5:
			printf("Hoje é dia %i de Maio de %i \n", dia,ano );
				break;
				
		case 6:
			printf("Hoje é dia %i de Junho de %i \n", dia,ano );
				break;
				
		case 7:
			printf("Hoje é dia %i de Julho de %i \n", dia,ano );
				break;
				
		case 8:
			printf("Hoje é dia %i de Agosto de %i \n", dia,ano );
				break;
				
		case 9:
			printf("Hoje é dia %i de Setembro de %i \n", dia,ano );
				break;
				
		case 10:
			printf("Hoje é dia %i de Outubro de %i \n", dia,ano );
				break;
				
		case 11:
			printf("Hoje é dia %i de Novembro de %i \n", dia,ano );
				break;
				
		case 12:
			printf("Hoje é dia %i de Dezembro de %i \n", dia,ano );
				break;
				
		default:
			printf("Mês inválido =(");
		}
		
		system("pause");
				

}
