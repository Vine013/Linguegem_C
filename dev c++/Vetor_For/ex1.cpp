//VINICIUS FELIPE GRANDO SANTIAGO
//PAULO GABRIEL 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	int main(){
	setlocale(LC_ALL, "Portuguese");	
	
	//Definindo as vari�veis
	int i;	
	int vetor[5];
	int soma = 0;
	
	//loop for para a entrada de dados
	for(i=0; i<5; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &vetor[i]);
		
		soma += vetor[i];
	}
	
	//saida de dados
	printf("\nA soma dos n�meros � %d\n", soma);
	
}
