#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n,cal;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	
	cal = n%2;								
	
	if (cal==0){
	printf("O número é par");
	}
		
	else{
	printf("O número é impar");
	}
		
		
}
