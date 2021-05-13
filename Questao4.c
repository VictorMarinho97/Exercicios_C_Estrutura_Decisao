// 4 - Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>

int main(void) {

  char c;

  printf("Digite uma letra: \n");
  scanf("%c", &c);

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    printf("\n '%c' é uma vogal.", c);
  } else {
    printf("\n '%c' é uma consoante.", c);
  }

  return 0;
}
