//Faça um algoritmo para calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas

#include <stdio.h>

int main() {
    float prova1, prova2, prova3, prova4;
    float bimestre1, bimestre2;
    float notaSemestral;

    printf("Digite a nota das 4 provas do semestre: ");
    scanf("%f %f %f %f", &prova1, &prova2, &prova3, &prova4);

    bimestre1 = (prova1 + prova2) / 2.0;
    bimestre2 = (prova3 + prova4) / 2.0;
    notaSemestral = (bimestre1 + bimestre2) / 2.0;

    printf("A sua nota semestral é: %.2f\n", notaSemestral);
    return 0;
}