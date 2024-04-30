#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1,num2,som,sub,div,mult;
	int op;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &num2);
	
	printf("Digite o operação que deseja executar...\n 1 - Soma (+)\n 2 - Subtração (-)\n 3 - Divisão (/)\n 4 - Multiplicação (*)\n Operação: ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			som = num1+num2;
			printf("O valor da soma do primeiro valor mais o segundo é %.2f \n", som);
				break;
				
		case 2:
			sub = num1-num2;
			printf("O valor do primeiro valor menos o segundo é %.2f \n", sub);
				break;
				
		case 3:
			div = num1/num2;
			printf("O valor da divisão do primeiro valor pelo segundo é %.2f \n", div);
				break;
				
		case 4:
			mult = num1*num2;
			printf("O valor da multiplicação do primeiro valor pelo segundo é %.2f \n", mult);
				break;
				
		default:
			printf("Operação inválida =( \n");
		}
		
		system("pause");
}
