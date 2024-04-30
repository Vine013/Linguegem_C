#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declaração de variáveis
	int i;
	int soma = 0;
	
			//Inicio do loop
	for(i=1;i<=100;i++){
		soma+=i;
	}
	
			//Saida de dados
	printf("\nA soma dos números de 1 à 100 é %i =)\n", soma);
	
	return 0;
}

