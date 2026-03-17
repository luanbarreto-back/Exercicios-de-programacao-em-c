#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &a, &b);
    printf("%.2lf elevado a %.2lf = %.2lf\n", a, b, pow(a, b));
    printf("%.2lf elevado a %.2lf = %.2lf\n", b, a, pow(b, a));
    return 0;
}
