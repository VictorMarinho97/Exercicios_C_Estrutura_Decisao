//Faça um Programa que peça dois números e imprima o maior deles.

#include <stdio.h>

int main(void) {
int a, b;

  printf("Digite o primeiro número: \n");
  scanf("%d", &a);

  printf("\n Digite o segundo número: \n" );
  scanf("%d", &b);

  if(a > b){
    printf("O maior número é: %0.2d", a);
  } else if (b > a){
    printf("O maior número é: %0.2d", b);
  } else {
    printf("Ambos são iguais");
  }
  return 0;
}
