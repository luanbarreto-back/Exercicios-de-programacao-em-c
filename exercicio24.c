#include <stdio.h>

int main() {
    double soma = 0;

    for(int i = 1; i <= 50; i++) {
        soma += (51 - i) / (double)i; // 50/1, 49/2, ..., 1/50
    }

    printf("Somatorio: %.2lf\n", soma);
    return 0;
}
