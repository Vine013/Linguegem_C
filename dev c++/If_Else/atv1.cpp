#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declaração de Variáveis
	float precoEtanol, precoGasolina;

		// Entrada de Dados
  printf("Digite o preço do litro do etanol R$ ");
  scanf("%f", &precoEtanol);

  printf("Digite o preço do litro da gasolina R$ ");
  scanf("%f", &precoGasolina);

    	//Saída
  if (precoEtanol <= 0 or precoGasolina <= 0) {
    printf("Preços inválidos. Certifique-se de digitar valores positivos.\n");

  } else {
	float proporcao = precoEtanol / precoGasolina;

	if (proporcao <= 0.7) {
		printf("Usar etanol.\n");

    } else {
      printf("Usar gasolina.\n");
    }

  }



  return 0;

}
