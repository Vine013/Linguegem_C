#include <stdio.h>

int main(){
	
	int i;
	int vetor[5] = {5, 5, 5, 90, 97};
	int min = vetor[0];
	int max = vetor[0];
 
	for(i = 0; i < 5; i++){
		if(vetor[i] > max){
			max = vetor[i];
		}
		else if(vetor[i] < min){
			min = vetor[i];
		}
	}
	printf("\nO menor valor: %d\n", min);
	printf("\nO maior valor: %d\n", max);
}
