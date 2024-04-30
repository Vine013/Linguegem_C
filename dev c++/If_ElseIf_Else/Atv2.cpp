#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
   
    setlocale(LC_ALL, "Portuguese");
    
		// Declara��o de Vari�veis
	float p,h,imc;
    
    	// Entrada de Dados
    printf("Informe seu peso em kg: ");
    scanf("%f", &p);
    
    printf("Informe sua altura em metros: ");
    scanf("%f", &h);
        
        // Processamento de Dados
    imc = p/(h*h);
    
    	// Sa�da de Dados
    printf("O seu IMC (�ndice de Massa Corp�rea) �: %.2f\n", imc);
    
    if(imc<=18.5){
    	printf("Voc� est� abaixo do peso normal!\n");
	}
    else if(imc<=25){
    	printf("Voc� est� no peso normal!\n");
	}
    else if(imc>=26 and imc<=30){
    	printf("Voc� est� acima do peso normal!\n");
	}
    else if(imc>30){
    	printf("Voc� est� com obesidade!\n");
	}
}
    
