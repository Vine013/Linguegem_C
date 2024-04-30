#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho], soma=0, i;
	float media;
	
	printf("Digite os elementos do vetor:\n");
	for(i = 0; i < tamanho; i++){
		printf("Elemento %d:", i + 1);
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma / tamanho;
	printf("Média dos elementos: %.2f\n", media);
	
}
	
