#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declaração de Variáveis
    float s,vd;
    
		// Entrada de Dados
    printf("Informe o seu salário: ");
    scanf("%f", &s);
    
    	// Saída
    if(s<=1174.86){
		printf("O valor da sua aliquota é de 8%%  e ");
		vd = s*0.08;
			printf("o valor devido é de R$ %.2f", vd);
	}
    	
    else if(s>=1174.87 and s<1958.10){
		printf(" valor da sua aliquota é de 9%%  \n");
		vd = s*0.09;
			printf("O valor devido é de R$ %.2f", vd);
	}
    	
    else if(s>=1958.11 and s<=3916.28){
		printf("O valor da sua aliquota é de 11%% \n");
		vd = s*0.11;
			printf("O valor devido é de R$ %.2f", vd);
    }	
    
    else if(s>3916.20){
		printf("A sua aliquota é no valor fixo de R$430,78 \n");
		
	}
    	
    	
}
