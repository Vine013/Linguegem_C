#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o da 1� variavel
	int n = 9;
	
	//1� la�o e saida de dados
	while(n<20){
		n++;
		printf("\nN�mero: %i\n", n);
	}
	
	//Declara��o da 2� variavel
	int x = 99;
	
	//2� la�o e saida de dados
	while(x<110){
	x++;
	printf("\nN�mero: %i\n", x);
	}
	
	return 0;
}
