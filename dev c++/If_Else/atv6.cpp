#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declara��o de Vari�veis
    int idade,sexo,grau;
    float altura;
    
    	// Entrada de Dados
    printf("Informe o sua idade: ");
    scanf("%d", &idade);
	
	printf("Informe o seu sexo (Digite '1' para Mulher e '0' para Homem): ");
    scanf("%d", &sexo);
	
    printf("Informe a sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("Informe se voc� possui segundo grau completo (Digite '1' para Sim e '0' para N�o): ");
    scanf("%d", &grau);
    
    	// Sa�da
    
			if (idade>=18 and idade<=29 and grau==1){
				if (sexo==1 and altura>=1.58 or sexo==0 and altura>=1.65){
				printf("Voc� atende a todos os pr�-requisitos =)");		
				} else {
					printf("Voc� n�o atende a altura m�nima =(");
				}
		
			} else {
			printf("Voc� n�o atende os pr�-requisitos =(");
			}	

}















