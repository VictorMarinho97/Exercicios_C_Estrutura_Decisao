// 4 - Fa�a um Programa que verifique se uma letra digitada � vogal ou consoante.

#include <stdio.h>

int main(void) {

  char c;

  printf("Digite uma letra: \n");
  scanf("%c", &c);

  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    printf("\n '%c' � uma vogal.", c);
  } else {
    printf("\n '%c' � uma consoante.", c);
  }

  return 0;
}
