#include <stdio.h>

int main() {
    int n, positivos = 0;
    for(int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > 0) positivos++;
    }
    printf("Quantidade de numeros positivos: %d\n", positivos);
    return 0;
}
