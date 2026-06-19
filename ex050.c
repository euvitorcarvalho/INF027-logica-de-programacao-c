/* 50. Escreva um programa que leia um valor e imprima todas as possíveis
combinações em que o lançamento de um par de dados tenha como resultado da soma
dos valores dos dados o número lido. Por exemplo, se a entrada for o número 7, o
programa deve imprimir as seguintes combinações:
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1

obs: O professor pediu para reproduzir a mesma lógica, só que com 3 dados.
*/

#include <stdio.h>
#define LADOS 6

int main() {
  int numero, resultado;
  int dado1, dado2, dado3;

  printf("Informe o número: ");
  scanf("%d", &numero);

  for (dado1 = 1; dado1 <= LADOS; dado1++) {
    for (dado2 = 1; dado2 <= LADOS; dado2++) {
      dado3 = numero - dado1 - dado2;
      if (dado3 >= 1 && dado3 <= LADOS) {
        printf("%d %d %d\n", dado1, dado2, dado3);
      }
    }
  }
  return 0;
}