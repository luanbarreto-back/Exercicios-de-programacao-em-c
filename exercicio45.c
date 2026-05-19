#include <stdio.h>

int main() {
    int a1, an, n;
    float r, soma;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Digite o último termo da PA: ");
    scanf("%d", &an);

    printf("Digite a razão da PA: ");
    scanf("%f", &r);

    // Calcula o número de termos
    n = ((an - a1) / r) + 1;

    // Soma da PA: S = n/2 * (a1 + an)
    soma = n * (a1 + an) / 2.0;

    printf("A soma dos elementos da PA é: %.2f\n", soma);

    return 0;
}
