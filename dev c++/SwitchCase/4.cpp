#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float vc,vt,desc;
	int c;
	
	printf("Digite o valor total da sua compra: R$ ");
	scanf("%f", &vc);
	
	printf("Digite seu c�digo de comprador...\n 1 - Cliente Comum\n 2 - Funcion�rio\n 3 - Cliente VIP\n C�digo: ");
	scanf("%i", &c);
	
	switch(c){
		case 1:
			printf("O valor total da sua compra � R$ %.2f \n", vc);
				break;
				
		case 2:
			desc = vc*0.1;
			vt = vc-desc;
			printf("O valor total da sua compra � R$ %.2f \n", vt);
				break;
				
		case 3:
			desc = vc*0.05;
			vt = vc-desc;
			printf("O valor total da sua compra � R$ %.2f \n", vt);
				break;
				
		default:
			printf("C�digo de comprador inv�lido =(");
		}
		
		system("pause");
}
