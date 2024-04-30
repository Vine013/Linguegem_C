#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    
	setlocale(LC_ALL, "Portuguese");
	
		// Declaração de Variáveis
	int a1,a2,a3;
    
		// Entrada de Dados
    printf("Informe o valor do ângulo 1: ");
    scanf("%i", &a1);
    
    printf("Informe o valor do ângulo 2: ");
    scanf("%i", &a2);
    
    printf("Informe o valor do ângulo 3: ");
    scanf("%i", &a3);
    
    	// Saída
    if(a1==90 or a2==90 or a3==90)
    printf("Seu triangulo é do tipo retângulo!");
    
    else if(a1>90 or a2>90 or a3>90)
    printf("Seu triangulo é do tipo obtusângulo!");
    
    else if(a1<90 and a2<90 and a3<90)
    printf("Seu triangulo é do tipo acutângulo!");
    
}
