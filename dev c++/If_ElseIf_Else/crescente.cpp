#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    int n1,n2,n3;
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Informe o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Informe o segundo valor: ");
    scanf("%i", &n2);
    
    printf("Informe o terceiro valor: ");
    scanf("%i", &n3);
    
    
	if(n1>n2 and n2>n3 and n1>n3)
   	printf("A ordem crecente = %.i - %.i - %.i\n " , n3,n2,n1);

	else if(n1>n3 and n3>n2 and n1>n2)
	printf("A ordem crecente = %.i - %.i - %.i\n " , n2,n3,n1);
	
	else if(n2>n1 and n1>n3 and n2>n3)
	printf("A ordem crecente = %.i - %.i - %.i\n " , n3,n1,n2);	
	
	else if(n2>n3 and n3>n1 and n2>n1)
	printf("A ordem crecente = %.i - %.i - %.i\n " , n1,n3,n2);
	
	else if(n3>n2 and n2>n1 and n3>n1)
	printf("A ordem crecente = %.i - %.i - %.i\n " , n1,n2,n3);
	
	else if(n3>n1 and n1>n2 and n3>n2)
	printf("A ordem crecente = %.i - %.i - %.i\n " , n2,n1,n3);
	
	else if(n1==n2 or n1==n3 or n2==n3)
	printf("Os números não podem ser iguais =(");
	

}
