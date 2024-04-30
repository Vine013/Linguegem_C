#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
   
    setlocale(LC_ALL, "Portuguese");
    
		// Declaração de Variáveis
	float p,h,imc;
    
    	// Entrada de Dados
    printf("Informe seu peso em kg: ");
    scanf("%f", &p);
    
    printf("Informe sua altura em metros: ");
    scanf("%f", &h);
        
        // Processamento de Dados
    imc = p/(h*h);
    
    	// Saída de Dados
    printf("O seu IMC (Índice de Massa Corpórea) é: %.2f\n", imc);
    
    if(imc<=18.5){
    	printf("Você está abaixo do peso normal!\n");
	}
    else if(imc<=25){
    	printf("Você está no peso normal!\n");
	}
    else if(imc>=26 and imc<=30){
    	printf("Você está acima do peso normal!\n");
	}
    else if(imc>30){
    	printf("Você está com obesidade!\n");
	}
}
    
