#include <stdlib.h> //biblioteca de prop�sito geral padr�o da linguagem de programa��o C,envolvendo aloca��o de mem�ria
#include <stdio.h>
#include <locale.h>


int main() 

{

setlocale(LC_ALL, "Portuguese");

  int idade, sexo, segundoGrau;

  float altura;



  printf("Informe a idade: ");

  scanf("%d", &idade);



  printf("Informe o sexo (1 para mulher, 0 para homem): ");

  scanf("%d", &sexo);



  printf("Informe a altura em metros: ");

  scanf("%f", &altura);



  printf("Possui segundo grau completo? (1 para Sim, 0 para N�o): ");

  scanf("%d", &segundoGrau);



  if (idade >= 18 && idade <= 29 && segundoGrau == 1) {

    if ((sexo == 1 && altura >= 1.58) || (sexo == 0 && altura >= 1.65)) {

      printf("O candidato(a) atende aos pr�-requisitos.\n");

    } else {

      printf("O candidato(a) n�o atende � altura m�nima.\n");

    }

  } else {

    printf("O candidato(a) n�o atende aos pr�-requisitos de idade ou segundo grau completo.\n");

  }



  return 0;

}
