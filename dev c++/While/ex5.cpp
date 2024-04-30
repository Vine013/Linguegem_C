#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	
	char op;
	float n1,n2,x;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	
	printf("\nDigite + para adição\nDigite – para subtração\nDigite * para multiplicação\nDigite / para divisão\n\nEscolha sua operação: ");
	scanf("%s", &op);
		
	while(op!='+' and op!='-' and op!='*' and op!='/'){
		printf("Digite novamente!");
		scanf("%s", &op);
	}		
			switch(op){
				case '+':
					x = n1+n2;
					printf("1° número + 2° número = %2.f\n", x);
						break;
						
				case '-':
					x = n1-n2;
					printf("1° número - 2° número = %2.f\n", x);
						break;
						
				case '*':
					x = n1*n2;
					printf("1° número * 2° número = %2.f\n", x);
						break;
						
				case '/':
					x = n1/n2;
					printf("1° número / 2° número = %2.f\n", x);
						break;		
						
				default:
					printf("Carácter inválido.\n");
		
				}
		
}
