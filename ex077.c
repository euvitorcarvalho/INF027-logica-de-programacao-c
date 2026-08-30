// 77. Escreva um programa em C, que leia uma string, gere uma nova string com o
// texto invertido e imprima esta nova string.

#include <stdio.h>
#define TAMANHO_MAX 100

int main() {
  char texto[TAMANHO_MAX];
  char textoInvertido[TAMANHO_MAX];
  int tamanho = 0;

  printf("Informe um texto: ");
  fgets(texto, sizeof(texto), stdin);

  while (texto[tamanho] != '\0') {
    if (texto[tamanho] == '\n') {
      texto[tamanho] = '\0';
      break;
    }
    tamanho++;
  }

  int iCont = 0;
  int jCont = tamanho - 2;

  while (jCont >= 0) {
    textoInvertido[iCont] = texto[jCont];
    iCont++;
    jCont--;
  }

  textoInvertido[iCont] = '\0';

  printf("%s", textoInvertido);

  return 0;
}