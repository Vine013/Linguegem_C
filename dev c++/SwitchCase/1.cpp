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
			printf("Hoje � dia %i de Janeiro de %i \n", dia,ano );
				break;
				
		case 2:
			printf("Hoje � dia %i de Fevereiro de %i \n", dia,ano );
				break;
		
		case 3:
			printf("Hoje � dia %i de Mar�o de %i \n", dia,ano );
				break;
				
		case 4:
			printf("Hoje � dia %i de Abril de %i \n", dia,ano );
				break;
				
		case 5:
			printf("Hoje � dia %i de Maio de %i \n", dia,ano );
				break;
				
		case 6:
			printf("Hoje � dia %i de Junho de %i \n", dia,ano );
				break;
				
		case 7:
			printf("Hoje � dia %i de Julho de %i \n", dia,ano );
				break;
				
		case 8:
			printf("Hoje � dia %i de Agosto de %i \n", dia,ano );
				break;
				
		case 9:
			printf("Hoje � dia %i de Setembro de %i \n", dia,ano );
				break;
				
		case 10:
			printf("Hoje � dia %i de Outubro de %i \n", dia,ano );
				break;
				
		case 11:
			printf("Hoje � dia %i de Novembro de %i \n", dia,ano );
				break;
				
		case 12:
			printf("Hoje � dia %i de Dezembro de %i \n", dia,ano );
				break;
				
		default:
			printf("M�s inv�lido =(");
		}
		
		system("pause");
				

}
