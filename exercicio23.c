#include <stdio.h>

int main() {
    double altura, somaMulheres = 0;
    int sexo, homens = 0, mulheres = 0, abaixo168 = 0;
    double maior = 0, menor = 0;
    int primeiro = 1;

    while(1) {
        printf("Digite altura (0 ou menor para encerrar): ");
        scanf("%lf", &altura);
        if(altura <= 0) break;

        printf("Digite sexo (1-masculino, 2-feminino): ");
        scanf("%d", &sexo);

        if(primeiro) {
            maior = menor = altura;
            primeiro = 0;
        } else {
            if(altura > maior) maior = altura;
            if(altura < menor) menor = altura;
        }

        if(sexo == 1) homens++;
        else if(sexo == 2) {
            mulheres++;
            somaMulheres += altura;
            if(altura < 1.68) abaixo168++;
        }
    }

    printf("Maior altura: %.2lf\nMenor altura: %.2lf\n", maior, menor);
    printf("Numero de homens: %d\n", homens);
    if(mulheres > 0)
        printf("Media de altura das mulheres: %.2lf\n", somaMulheres / mulheres);
    else
        printf("Nao houve mulheres.\n");
    if(mulheres > 0)
        printf("Percentual de mulheres abaixo de 1.68: %.2lf%%\n", (abaixo168 * 100.0) / mulheres);

    return 0;
}
