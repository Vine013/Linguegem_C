#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int i;	
	int vetor[i] = {};
	int soma = 0;
	int trinta = vetor[0];
	int soma_trinta = 0;
	int cont = 0;
	
	printf("Digite os elementos do vetor:\n");
	for(i = 0; i < 8; i++){
		printf("Elemento %d: ", i +1);
		scanf("%d", &vetor[i]);
		
		soma += vetor[i];
		
		if(vetor[i] > 30){
			trinta = vetor[i];
			cont++;

			soma_trinta += trinta;
		}
	}
	for(i=0;i<8;i++){	
	printf("\t%d\n", vetor[i]);
	}
	printf("\nExistem %d n�meros maiores que 30\n", cont);
	printf("\nA soma de todos os n�meros �: %d\n", soma);
	printf("\nA soma dos n�meros maiores que 30 �: %d\n", soma_trinta);
}
