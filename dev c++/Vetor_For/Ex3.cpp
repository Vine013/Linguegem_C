


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	int main(){
	setlocale(LC_ALL, "Portuguese");	
	
	//Definindo as variáveis
	int i;	
	int vetor[10];
	
	//entrada de dados no loop for
	printf("Digite os elementos do vetor:\n");
	for(i = 0; i < 10; i++){
		printf("Elemento %d: ", i +1);
		scanf("%d", &vetor[i]);
	}
	//loop for para a saida dos dados
	for(i = 9; i >= 0; i--){	
	printf("\t%d\n", vetor[i]);
	}
	
	return 0;
}

