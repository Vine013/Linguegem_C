#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
		// Declara��o de Vari�veis
	float precoEtanol, precoGasolina;

		// Entrada de Dados
  printf("Digite o pre�o do litro do etanol R$ ");
  scanf("%f", &precoEtanol);

  printf("Digite o pre�o do litro da gasolina R$ ");
  scanf("%f", &precoGasolina);

    	//Sa�da
  if (precoEtanol <= 0 or precoGasolina <= 0) {
    printf("Pre�os inv�lidos. Certifique-se de digitar valores positivos.\n");

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
