#include <stdio.h>

int main() {
    int vezes, totalAlunos = 0;
    int menos10 = 0, entre10e15 = 0, acima15 = 0;

    while (1) {
        printf("Número de vezes que o aluno utilizou o restaurante (negativo para sair): ");
        scanf("%d", &vezes);

        if (vezes < 0) break;

        totalAlunos++;

        if (vezes < 10) menos10++;
        else if (vezes <= 15) entre10e15++;
        else acima15++;
    }

    if (totalAlunos > 0) {
        printf("Percentual de alunos com menos de 10 usos: %.2f%%\n", (menos10 * 100.0 / totalAlunos));
        printf("Percentual de alunos com 10 a 15 usos: %.2f%%\n", (entre10e15 * 100.0 / totalAlunos));
        printf("Percentual de alunos com mais de 15 usos: %.2f%%\n", (acima15 * 100.0 / totalAlunos));
        printf("Número total de alunos entrevistados: %d\n", totalAlunos);
    } else {
        printf("Nenhum aluno foi entrevistado.\n");
    }

    return 0;
}
