#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream> 
#include <string>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declara��o de Vari�veis
	char nome[50];	
	int dias, diaria; 
	float ctotal,tx;

		// Entrada de Dados
	printf("Digite seu nome e sobrenome: ");
	scanf("%s", nome);
	
	
	printf("Insira qual o n�mero de dias hospedado no hotel: ");
	scanf("%i", &dias);
	
	    //Sa�da
	if(dias>15){
		tx = 5.50*dias;
		diaria = 60.00*dias;
		ctotal = tx+diaria;
		printf("%s o valor total de sua conta � R$ %.2f", nome, ctotal);
	}
	else if(dias==15){
		tx = 6.00*dias;
		diaria = 60.00*dias;
		ctotal = tx+diaria;
		printf("%s o total de sua conta � R$ %.2f", nome,ctotal);
	}
	else if(dias<15){
		tx = 8.00*dias;
		diaria = 60.00*dias;
		ctotal = tx+diaria;
		printf("%s o total de sua conta � R$ %.2f", nome,ctotal);
	}
}

