//Fa�a um Programa que pe�a dois n�meros e imprima o maior deles.

#include <stdio.h>

int main(void) {
int a, b;

  printf("Digite o primeiro n�mero: \n");
  scanf("%d", &a);

  printf("\n Digite o segundo n�mero: \n" );
  scanf("%d", &b);

  if(a > b){
    printf("O maior n�mero �: %0.2d", a);
  } else if (b > a){
    printf("O maior n�mero �: %0.2d", b);
  } else {
    printf("Ambos s�o iguais");
  }
  return 0;
}
