#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float prc,desc,v,div,vt;
	int cod;
	
	printf("Digite o pre�o do seu produto: R$ ");
	scanf("%f", &prc);
	
	printf("Digite o c�digo relativo a forma de pagamento...\n 1 - � vista com 30%% de desconto\n 2 - Dividir em 2x com 20%% de desconto\n 3 - Dividir em 3x com 10%% de desconto\n 4 - Dividir em 4x sem nenhum desconto\n C�digo: ");
	scanf("%i", &cod);
	
	switch(cod){
		case 1:
			desc = prc*0.3;
			v = prc-desc;
			printf("O valor do produto � vista com o desconto de 30%% � R$ %.2f \n", v);
				break;
				
		case 2:
			div = prc/2;
			desc = div*0.2;
			v = div-desc;
			printf("O valor de cada parcela do produto dividido em duas vezes com o desconto de 20%% � R$ %.2f \n", v);
			
			vt = v*2;
			printf("O valor total das parcelas � de R$ %.2f \n", vt);
				break;
				
		case 3:
			div = prc/3;
			desc = div*0.1;
			v = div-desc;
			printf("O valor de cada parcela do produto dividido em tr�s vezes com o desconto de 10%% � R$ %.2f \n", v);
				
			vt = v*3;
			printf("O valor total das parcelas � de R$ %.2f \n", vt);
				break;
				
		case 4:
			v = prc/4;
			printf("O valor de cada parcela do produto dividido em quatro vezes sem desconto � R$ %.2f \n", v);
			
			vt = v*4;
			printf("O valor total das parcelas � de R$ %.2f \n", vt);	
				break;
				
		default:
			printf("C�digo de pagamento inv�lido =(");
		}
		
		system("pause");
}
