//Faça um Programa que verifique se uma letra digitada é "F" ou "M".
//Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

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
        printf("Sexo inválido!");
      break;
}
  return 0;
}
