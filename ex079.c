// 79. Escreva um programa em C, que gere a substring de uma string original,
// dado a posição inicial e a final da substring.

#include <stdio.h>
#define TAMANHO_MAX 100

int main() {
  char texto[TAMANHO_MAX];
  char subtexto[TAMANHO_MAX];
  int inicio, fim;
  int iCont, jCont;

  printf("Digite um texto: ");
  fgets(texto, sizeof(texto), stdin);

  printf("Digite a posição inicial e final da substring (ex: 2 5): ");
  scanf("%d %d", &inicio, &fim);

  iCont = inicio;
  jCont = 0;

  while (iCont <= fim && texto[iCont] != '\0' && texto[iCont] != '\n') {
    subtexto[jCont] = texto[iCont];
    iCont++;
    jCont++;
  }

  subtexto[jCont] = '\0';

  printf("\nO subtexto é: %s\n", subtexto);

  return 0;
}