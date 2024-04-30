#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declaração de Variáveis
	char carro;
	float p,c;
	
		// Entrada de Dados
	printf("Informe o tipo do seu carro ('A', 'B' ou 'C'): ");
    scanf("%c", &carro);
    
    printf("Informe percurso rodado (em km): ");
    scanf("%f", &p);
		
    	//Saída
    if(carro=='A' or carro=='a'){
		c = p/8;
	    printf("Com esse carro o consumo estimado é de %.2f km/litro", c);
	}
	else if(carro=='B' or carro=='b'){
		c = p/9;
	    printf("Com esse carro o consumo estimado é de %.2f km/litro", c);
	}
    if(carro=='C' or carro=='c'){
		c = p/12;
	    printf("Com esse carro o consumo estimado é de %.2f km/litro", c);
	}
    	
}
