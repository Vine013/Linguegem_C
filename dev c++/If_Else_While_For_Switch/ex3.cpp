#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
			//Declara��o de vari�veis
	int i;
	int soma = 0;
	
			//Inicio do loop
	for(i=1;i<=100;i++){
		soma+=i;
	}
	
			//Saida de dados
	printf("\nA soma dos n�meros de 1 � 100 � %i =)\n", soma);
	
	return 0;
}

