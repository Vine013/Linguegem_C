#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n,cal;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	cal = n%2;								
	
	if (cal==0){
	printf("O n�mero � par");
	}
		
	else{
	printf("O n�mero � impar");
	}
		
		
}
