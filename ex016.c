// Escreva um programa para gerar o invertido de um número com três algarismos (exemplo: o invertido de 498 é 894).

#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    printf("Informe um número com três algarismos: ");
    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("O número invertido é: %d\n", invertido);

    return 0;
}