#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	
	int ano;
	
	printf("Digite um ano (no modelo 'aaaa'): ");
	scanf("%i", &ano);
	
	while(ano > 0){
		if(ano%4==0 and ano%100!=0 or ano%400==0)
		printf("O ano � bissexto!");
			
		else
		printf("O ano n�o � bissexto =(");
				break;
			
	}
}
