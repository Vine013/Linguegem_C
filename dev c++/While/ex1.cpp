#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	int x;
	
	//Inicialização da variável de controle de laço
	
	x = 10;
	
	while(x <= 20){							//Enquanto
		printf("a = %i \n", x);				
	x++;                                    //x+1
	}
	
	printf("Final do Laço! \n\n");
	
}
