#include <stdlib.h> //biblioteca de propósito geral padrão da linguagem de programação C,envolvendo alocação de memória
#include <stdio.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Portuguese");

  char nomecliente[50];

  int numdiarias;

  float taxaservicos, totalconta;



	printf("Informe o nome do cliente: ");	
	scanf("%s", nomecliente);

	printf("Informe o número de diárias: ");
	scanf("%d", &numdiarias);



  if (numdiarias > 15) {

    taxaservicos = 5.50;

  } else if (numdiarias == 15) {

    taxaservicos = 6.00;

  } else {

    taxaservicos = 8.00;

  }



  totalconta = (60.00 + taxaservicos) * numdiarias;



  printf("Cliente: %s\n", nomecliente);

  printf("Total da conta: R$ %.2f\n", totalconta);



  return 0;
  
}
