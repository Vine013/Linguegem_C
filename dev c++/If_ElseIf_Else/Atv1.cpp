#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    
	setlocale(LC_ALL, "Portuguese");
	
		// Declaração de Variáveis
	int id;
    
    	// Entrada de Dados
    printf("Informe sua idade: ");
    scanf("%i", &id);
    
		// Saída de Dados
    if (id<18)
    printf("Você é menor de idade! Tente novamente em %.i anos", 18-id );
    
    else if (id>=18 and id<65)
    printf("Você está na flor da idade!");
    
    else if(id>=65)
    printf("Você está na melhor idade!");
    
}
