#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    double R, S, D;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    R = pow((A + B), 2);
    S = B + C;

    D = (R + S) / 2.0;

    printf("O valor de D é: %.2f\n", D);

    return 0;
}
