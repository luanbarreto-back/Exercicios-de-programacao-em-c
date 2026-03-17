#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Proximos 10 numeros pares:\n");
        for(int i = 1; i <= 10; i++) {
            printf("%d ", n + 2*i);
        }
        printf("\n");
    } else {
        printf("O numero nao e par.\n");
    }
    return 0;
}
