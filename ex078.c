// 78. Escreva um programa em C, que leia uma string e um caracter e conte o
// número de ocorrências do caracter lido na string.

#include <stdio.h>
#define TAMANHO_MAX 100

int main() {
  char texto[TAMANHO_MAX];
  char caractere;
  int ocorrencias = 0;

  printf("Digite um texto: ");
  fgets(texto, sizeof(texto), stdin);

  printf("Digite um caractere: ");
  scanf(" %c", &caractere);

  int iCont = 0;
  while (texto[iCont] != '\0') {
    if (texto[iCont] == caractere) {
      ocorrencias++;
    }
    iCont++;
  }

  printf("\nO caractere '%c' aparece %d vez(es) no texto.\n", caractere, ocorrencias);

  return 0;
}