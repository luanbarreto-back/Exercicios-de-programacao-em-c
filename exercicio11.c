#include <stdio.h>

int main() {
    int n, positivos = 0, negativos = 0, zeros = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > 0) positivos++;
        else if(n < 0) negativos++;
        else zeros++;
    }
    printf("Positivos: %d\nNegativos: %d\nZeros: %d\n", positivos, negativos, zeros);
    return 0;
}
