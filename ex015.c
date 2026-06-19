// Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um programa para ler os dados necessários e calcular a altura do prédio.

#include <stdio.h>

int main() {
    float altura, suaSombra, sombraPredio, alturaPredio;

    printf("Informe sua altura, o comprimento da sua sombra e o comprimento da sombra do prédio: ");
    scanf("%f %f %f", &altura, &suaSombra, &sombraPredio);

    alturaPredio = (altura * sombraPredio) / suaSombra;

    printf("A altura do prédio é: %.2f\n", alturaPredio);

    return 0;
}