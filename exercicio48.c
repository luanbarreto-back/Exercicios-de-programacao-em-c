#include <stdio.h>
#include <math.h>

int main() {
    double H, R, distancia = 0, alturaAtual;
    int N;

    printf("Digite a altura inicial H: ");
    scanf("%lf", &H);

    printf("Digite o coeficiente de salto R (0 < R < 1): ");
    scanf("%lf", &R);

    printf("Digite o número de saltos N: ");
    scanf("%d", &N);

    alturaAtual = H;
    for (int i = 1; i <= N; i++) {
        distancia += alturaAtual;
        alturaAtual *= R;    
        distancia += alturaAtual;
    }

    printf("Distância percorrida após %d saltos: %.2lf\n", N, distancia);
    printf("Altura do %dº salto: %.2lf\n", N, alturaAtual);

    return 0;
}
