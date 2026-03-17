#include <stdio.h>

int main() {
    int n;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        printf("Numero lido: %d\n", n);
    }
    return 0;
}
