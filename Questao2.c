// 2 - Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo

#include <stdio.h>

int main(void) {

  int valor;

  printf("Digite um valor: \n");
  scanf("%d", &valor);

 if(valor >= 0){
   printf("\n %d é positivo", valor);
 } else{
   printf("\n %d é negativo", valor);
 }


  return 0;
}
