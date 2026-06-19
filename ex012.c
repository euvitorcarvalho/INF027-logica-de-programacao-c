// Faça um algoritmo que transforme uma velocidade fornecida em m/s pelo usuário para Km/h. Para tal, multiplique o valor em m/s por 3,6.

#include <stdio.h>

int main() {
    float velocidade_ms, velocidade_kmh;

    printf("Informe uma velocidade (m/s): ");
    scanf("%f", &velocidade_ms);

    velocidade_kmh = velocidade_ms * 3.6;

    printf("A velocidade em kmh é: %.1f\n", velocidade_kmh);

    return 0;
}