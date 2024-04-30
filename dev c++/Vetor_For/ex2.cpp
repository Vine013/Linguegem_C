//VINICIUS FELIPE GRANDO SANTIAGO
//PAULO GABRIEL 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	int main(){
	setlocale(LC_ALL, "Portuguese");	
	
	//Definindo as variáveis
	int i;	
	int vetor[5];
	float media = 0.0f;
	int soma = 0;
	int menor = vetor[0];
	int maior = vetor[0];
	int contMaior = 0;
	int contMenor = 0;
	
	//Primeiro for para a entrada de valores
	for(i=0; i<5; i++){
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
		
		//calculo da média
		soma += vetor[i];
		media = soma/5;
	}
	
	//loop for para a definição dos números maiores e menores que a média
	for(i=0; i<5; i++){
		if(vetor[i] > media){
			if(vetor[i] > maior){
			maior = vetor[i];
			contMaior ++;
		}
	}
		else{
			if(vetor[i] < menor)
			menor = vetor[i];
			contMenor ++;
		}
	}
	
	//saida de dados
	printf("\n A média dos valores é %.2f", media);
	printf("\nExistem %d valor(es) acima da média", contMaior);
	printf("\nExistem %d valor(es) abaixo da média", contMenor);
	
	return 0;
}
