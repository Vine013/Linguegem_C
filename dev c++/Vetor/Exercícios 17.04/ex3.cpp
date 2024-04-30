#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //funções para manipular strings

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[3][20];
	int x;
	
	//Captura os nomes
	for(x=0;x<3;x++){
	printf("\n[%d] Digite o nome %d: ", x,(x+1));
	gets(nome[x]);	
	}
		
	//Exibe os nomes
	for(x=0;x<3;x++){
		printf("\n O nome %s tem %i letras\n", nome[x],strlen(nome[x])); //strlen verifica o numero de letras
	}
}
