#include <stdio.h>

int main() {
    double altura, somaMulheres = 0, somaTotal = 0;
    int sexo, totalMulheres = 0, totalHomens = 0;
    int abaixo165 = 0;

    for(int i = 1; i <= 50; i++) {
        printf("Pessoa %d\n", i);
        printf("Digite a altura: ");
        scanf("%lf", &altura);
        printf("Digite o sexo (0=masc, 1=fem): ");
        scanf("%d", &sexo);

        somaTotal += altura;

        if(sexo == 0) {
            totalHomens++;
        } else if(sexo == 1) {
            totalMulheres++;
            somaMulheres += altura;
            if(altura < 1.65) abaixo165++;
        }
    }

    printf("\nResultados:\n");
    if(totalMulheres > 0)
        printf("Media de altura das mulheres: %.2lf\n", somaMulheres / totalMulheres);
    else
        printf("Nao houve mulheres.\n");

    printf("Media de altura da populacao: %.2lf\n", somaTotal / 50);
    printf("Percentual de homens: %.2lf%%\n", (totalHomens * 100.0) / 50);
    printf("Quantidade de mulheres: %d\n", totalMulheres);
    if(totalMulheres > 0)
        printf("Percentual de mulheres abaixo de 1.65 m: %.2lf%%\n", (abaixo165 * 100.0) / totalMulheres);

    return 0;
}
