#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    
	setlocale(LC_ALL, "Portuguese");
	
		// Declara��o de Vari�veis
	int id;
    
    	// Entrada de Dados
    printf("Informe sua idade: ");
    scanf("%i", &id);
    
		// Sa�da de Dados
    if (id<18)
    printf("Voc� � menor de idade! Tente novamente em %.i anos", 18-id );
    
    else if (id>=18 and id<65)
    printf("Voc� est� na flor da idade!");
    
    else if(id>=65)
    printf("Voc� est� na melhor idade!");
    
}
