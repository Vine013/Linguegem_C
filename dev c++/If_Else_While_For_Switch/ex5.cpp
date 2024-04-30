#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração da 1° variavel
	int n = 9;
	
	//1° laço e saida de dados
	while(n<20){
		n++;
		printf("\nNúmero: %i\n", n);
	}
	
	//Declaração da 2° variavel
	int x = 99;
	
	//2° laço e saida de dados
	while(x<110){
	x++;
	printf("\nNúmero: %i\n", x);
	}
	
	return 0;
}
