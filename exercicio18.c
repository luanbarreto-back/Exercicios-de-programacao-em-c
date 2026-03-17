#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Digite os catetos do triangulo: ");
    scanf("%lf %lf", &a, &b);
    printf("Hipotenusa: %.2lf\n", sqrt(a*a + b*b));
    return 0;
}
