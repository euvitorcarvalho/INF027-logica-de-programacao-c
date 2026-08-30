#include <stdio.h>
#define TAM_LINHA 2
#define TAM_COLUNA 2
#define TRUE 1
#define FALSE 0

int main() {
    int matriz[TAM_LINHA][TAM_COLUNA];
    int ehvalida = TRUE;

    for(int linha = 0; linha < TAM_LINHA; linha++){
        for(int coluna = 0; coluna < TAM_COLUNA; coluna++){
            printf("Informe um valor para a linha %d, coluna %d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    for(int linha = 0; linha < TAM_LINHA; linha++){
        for(int coluna = 0; coluna < TAM_COLUNA; coluna++){
            if(matriz[linha][coluna] != 1 || matriz[linha][coluna] != 0){
                ehvalida = FALSE;
                break;
            }
            somaLinha += matriz[linha][coluna];
            somaColuna +=  matriz[coluna][linha];
        }
        printf("Soma da linha: %d", somaLinha);
        printf("Soma da coluna: %d", somaColuna);
    }

    
    
    return 0;
}