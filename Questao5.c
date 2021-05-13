// 5 - Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a m�dia alcan�ada por aluno e apresentar:

//A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete

//A mensagem "Reprovado", se a m�dia for menor do que sete;

//A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez

#include <stdio.h>

int main(void) {

  float nota1, nota2;

  printf("Digite a primeira nota:");
  scanf("%f", &nota1);

  printf("\nDigite a segunda nota: ");
  scanf("%f", &nota2);

  float media = (nota1 + nota2) /2;

  printf("\n M�dia do aluno: %2.2f - ", media);

  if(media >= 7 && media <= 9){
    printf("Aprovado");
  } else if (media == 10){
    printf("Aprovado com distin��o!");
  } else if (media < 7){
    printf("Reprovado");
  } else{
    printf("M�dia inv�lida");
  }
  return 0;
}
