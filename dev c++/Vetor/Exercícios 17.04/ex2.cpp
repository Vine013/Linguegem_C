#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int vetor[] = {2,3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20};
	int x;
	setlocale(LC_ALL, "Portuguese");
	
	
	
	printf("\nNúmeros pares de 2 à 20:\n");
	
	for(x=0; x<=19; x++){
		if(vetor[x] % 2 == 0){
			printf("%i", vetor[x]);
		}
	}
}
