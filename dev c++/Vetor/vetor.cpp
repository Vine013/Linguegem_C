#include <stdio.h>

int main(){
	
	int i;
	int vetor1[] = {1, 2, 3, 4, 5};
	int vetor2[] = {6, 7, 8, 9, 10};
	int resultado[5];

	for(i = 0; i < 5; i++){
		resultado[i] = vetor1[2] + vetor2[3];
		printf("%d", resultado[i]);
	}
}
