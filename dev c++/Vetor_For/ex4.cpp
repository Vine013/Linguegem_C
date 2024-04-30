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
	int vetor[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,21};
	
	//loop for para definir os numeros pares ao contrário
	printf("Os números pares de trás para frente são:");
	for(i=10; i>=0; i--){
		if(vetor[i]%2 == 0){
			printf("\n%d", vetor[i]);
		}
	}
	
	//loop for para definir os numeros impares
	printf("\n\nOs números ímpares são:");
	for(i=0; i<=10; i++){
		if(vetor[i]%2 != 0){
				printf("\n%d", vetor[i]);
		}	
	}
	
	return 0;
}
