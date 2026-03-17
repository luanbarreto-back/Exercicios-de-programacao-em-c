#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares: %d\nImpares: %d\n", pares, impares);
    return 0;
}
