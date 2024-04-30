#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	int x;
	
	//Inicialização da variável de controle de laço
	
	x = 0;
	
	while(x <= 20){					     
	if(x%2==0)
			   
	printf("x = %i\n", x);
	
	x++;                         
	
	}
	
	printf("Final do Laço! \n\n");
	
}
