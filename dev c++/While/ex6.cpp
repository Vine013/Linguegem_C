#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	int idade,i,x,ix,xi;
				
	

	
	while(idade!=-99){
		printf("Digite sua idade: ");
		scanf("%i", &idade);
		
	}
		if(idade<21 or idade>50){
			x = idade>50;
			i = idade<21;
			ix = i+1;
			xi = x+1;
			printf("Existem %i pessoas com mais de 50 anos\n", xi);
			printf("Existem %i pessoas menores de 21 anos", ix);
			}
		
	
}
	
	
