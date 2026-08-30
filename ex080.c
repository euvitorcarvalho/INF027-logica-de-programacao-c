// 80. Escreva um programa em C que leia duas string e informe se a primeira contém a segunda.

#include <stdio.h>
#define MAX_TAM 100
#define TRUE 1
#define FALSE 0

int main() {
  char texto1[MAX_TAM];
  char texto2[MAX_TAM];
  int tamanhoTexto1 = 0;
  int tamanhoTexto2 = 0;
  int contemSegunda = FALSE;
  int i, j;

  printf("Informe o primeiro texto: ");
  fgets(texto1, sizeof(texto1), stdin);
  printf("Informe o segundo texto: ");
  fgets(texto2, sizeof(texto2), stdin);

  while (texto1[tamanhoTexto1] != '\0') {
    if (texto1[tamanhoTexto1] == '\n') {
      texto1[tamanhoTexto1] = '\0';
      break;
    }
    tamanhoTexto1++;
  }

  while (texto2[tamanhoTexto2] != '\0') {
    if (texto2[tamanhoTexto2] == '\n') {
      texto2[tamanhoTexto2] = '\0';
      break;
    }
    tamanhoTexto2++;
  }

  if (tamanhoTexto1 >= tamanhoTexto2) {
    for (i = 0; i <= tamanhoTexto1 - tamanhoTexto2; i++) {
      for (j = 0; j < tamanhoTexto2; j++) {
        if (texto1[i + j] != texto2[j]) {
          break;
        }
      }
      if (j == tamanhoTexto2) {
        contemSegunda = TRUE;
        break;
      }
    }
  }
  
  if(contemSegunda){
      printf("A primeira string contém a segunda");
  } else {
      printf("A primeira string não contém a segunda");
  }

  return 0;
}