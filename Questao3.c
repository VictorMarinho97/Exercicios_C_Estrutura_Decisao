//Fa�a um Programa que verifique se uma letra digitada � "F" ou "M".
//Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.

#include <stdio.h>

int main(void) {

  char c;

  printf("Digite 'M' ou 'F' para verificar o sexo:");
  scanf("%c", &c);

  switch(c){
    case 'M':
        printf("Masculino!");
      break;

    case 'F':
        printf("Feminino!");
      break;

    default:
        printf("Sexo inv�lido!");
      break;
}
  return 0;
}
