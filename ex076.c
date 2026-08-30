// 76. Escreva um programa em C, que leia uma string e conte quantas ocorrências
// de vogais existem nesta string.

#include <stdio.h>
#define TAMANHO_MAX 100

int main() {
  char texto[TAMANHO_MAX];
  char validacao[11] = "aeiouAEIOU";
  int iCont = 0;
  int vogais = 0;

  printf("Informe um texto: ");
  fgets(texto, sizeof(texto), stdin);

  while (texto[iCont] != '\0') {
    int jCont = 0;
    while (validacao[jCont] != '\0') {
      if (texto[iCont] == validacao[jCont]) {
        vogais++;
      }
      jCont++;
    }
    iCont++;
  }

  printf("Total de vogais encontradas: %d\n", vogais);

  return 0;
}

/*switch (texto[iCont]) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        vogais++;
        break;
    }*/