#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    
	setlocale(LC_ALL, "Portuguese");
	
		// Declara��o de Vari�veis
	int a1,a2,a3;
    
		// Entrada de Dados
    printf("Informe o valor do �ngulo 1: ");
    scanf("%i", &a1);
    
    printf("Informe o valor do �ngulo 2: ");
    scanf("%i", &a2);
    
    printf("Informe o valor do �ngulo 3: ");
    scanf("%i", &a3);
    
    	// Sa�da
    if(a1==90 or a2==90 or a3==90)
    printf("Seu triangulo � do tipo ret�ngulo!");
    
    else if(a1>90 or a2>90 or a3>90)
    printf("Seu triangulo � do tipo obtus�ngulo!");
    
    else if(a1<90 and a2<90 and a3<90)
    printf("Seu triangulo � do tipo acut�ngulo!");
    
}
