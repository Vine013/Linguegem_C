#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	
	int x;
	
	//Inicializa��o da vari�vel de controle de la�o
	
	x = 10;
	
	while(x <= 30){					     
	if(x%2!=0)
			   
	printf("x = %i\n", x);
	
	x++;                         
	
	}
	
	printf("Final do La�o! \n\n");
	
}
