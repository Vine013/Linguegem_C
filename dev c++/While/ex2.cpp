#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	
	int x;
	
	//Inicializa��o da vari�vel de controle de la�o
	
	x = 20;
	
	while(x >= 10){							//Enquanto
		printf("a = %i \n", x);				
	x--;                                    //x-1
	}
	
	printf("Final do La�o! \n\n");
	
}
