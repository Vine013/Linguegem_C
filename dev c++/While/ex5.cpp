#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	
	char op;
	float n1,n2,x;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	printf("\nDigite + para adi��o\nDigite � para subtra��o\nDigite * para multiplica��o\nDigite / para divis�o\n\nEscolha sua opera��o: ");
	scanf("%s", &op);
		
	while(op!='+' and op!='-' and op!='*' and op!='/'){
		printf("Digite novamente!");
		scanf("%s", &op);
	}		
			switch(op){
				case '+':
					x = n1+n2;
					printf("1� n�mero + 2� n�mero = %2.f\n", x);
						break;
						
				case '-':
					x = n1-n2;
					printf("1� n�mero - 2� n�mero = %2.f\n", x);
						break;
						
				case '*':
					x = n1*n2;
					printf("1� n�mero * 2� n�mero = %2.f\n", x);
						break;
						
				case '/':
					x = n1/n2;
					printf("1� n�mero / 2� n�mero = %2.f\n", x);
						break;		
						
				default:
					printf("Car�cter inv�lido.\n");
		
				}
		
}
