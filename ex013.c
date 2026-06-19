// Um circuito elétrico é composto de duas resistências R1 e R2 em paralelo, e ambas em sequência de uma resistência R3. Faça um algoritmo para calcular a resistência equivalente desse circuito.

#include <stdio.h>

int main() {
    float r1, r2, r3, req;
    float rParalelo, rEquivalente;

    printf("Digite o valor de R1: ");
    scanf("%f", &r1);
    printf("Digite o valor de R2: ");
    scanf("%f", &r2);
    printf("Digite o valor de R3: ");
    scanf("%f", &r3);

    rParalelo = (r1 * r2) / (r1 + r2);
    rEquivalente = rParalelo + r3;
    
    printf("A resistencia equivalente do circuito eh: %.1f", rEquivalente);

    return 0;
}