// 2 - Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo

#include <stdio.h>

int main(void) {

  int valor;

  printf("Digite um valor: \n");
  scanf("%d", &valor);

 if(valor >= 0){
   printf("\n %d � positivo", valor);
 } else{
   printf("\n %d � negativo", valor);
 }


  return 0;
}
