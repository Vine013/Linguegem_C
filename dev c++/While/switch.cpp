#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char vogal;
	
	printf("Digite uma vogal: ");
	scanf("%c", &vogal);
	
	switch(vogal){
		case 'a':
		case 'A':
			printf("Primeira vogal - %c\n", vogal);
				break;
				
		case 'e':
		case 'E':
			printf("Segunda vogal - %c\n", vogal);
				break;
				
		case 'i':
		case 'I':
			printf("Terceira vogal - %c\n", vogal);
				break;
				
		case 'o':
		case 'O':
			printf("Quarta vogal - %c\n", vogal);
				break;
				
		case 'u':
		case 'U':
			printf("Quinta vogal - %c\n", vogal);
				break;
				
		default:
			printf("Nao e uma vogal.\n");
		}
		system("pause");
}
