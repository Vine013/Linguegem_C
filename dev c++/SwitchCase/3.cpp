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
	
	printf("Digite o opera��o que deseja executar...\n 1 - Soma (+)\n 2 - Subtra��o (-)\n 3 - Divis�o (/)\n 4 - Multiplica��o (*)\n Opera��o: ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			som = num1+num2;
			printf("O valor da soma do primeiro valor mais o segundo � %.2f \n", som);
				break;
				
		case 2:
			sub = num1-num2;
			printf("O valor do primeiro valor menos o segundo � %.2f \n", sub);
				break;
				
		case 3:
			div = num1/num2;
			printf("O valor da divis�o do primeiro valor pelo segundo � %.2f \n", div);
				break;
				
		case 4:
			mult = num1*num2;
			printf("O valor da multiplica��o do primeiro valor pelo segundo � %.2f \n", mult);
				break;
				
		default:
			printf("Opera��o inv�lida =( \n");
		}
		
		system("pause");
}
